#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int partition(int *arr,int start,int end){
//inplace (cant take extra array)
int i=start-1;

int pivot=arr[end];
for(int j=start;j<=end-1;j++){
    //merge the smaller element in the region -1
    if(arr[j]<=pivot){
        i++;
      swap(arr[i],arr[j]);
    }
}
swap(arr[i+1],arr[end]);
return i+1;
}
void __quicksort(int *arr,int start,int end){
    if(start>=end){
        return;
    }
    int p=partition(arr,start,end);
            __quicksort(arr,start,p-1);
            __quicksort(arr,p+1,end);
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
     for(int i=0;i<n;i++){
        cin>>arr[i];
     }
     __quicksort(arr,0,n-1);
     for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
     }
      return 0;
}