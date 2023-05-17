#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void recursive_bubble(int *arr,int n){
if(n==1){
    return;
}
//after you have ,oved the largest element in the current part to the end of the array by pairwise seapping 

 for(int j=0;j<n-1;j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
        }
    }
    //sort the first n-1 elements
    recursive_bubble(arr,n-1);


}
void bubble_sort__recursive(int *arr,int j,int n){
    if(n==1){
    return;
}
if(j==n-1){
   return  bubble_sort__recursive(arr,0,n-1);

}if(arr[j]>arr[j+1]){
     swap(arr[j],arr[j+1]);
}
    bubble_sort__recursive(arr,j+1,n);

}
int * iterative_bubble(int *arr,int n){
for(int i=0;i<n-1;i++){
    for(int j=0;j<n-i-1;j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
        }
    }
     
}

return arr;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int *p=iterative_bubble(arr,n);
   for(int i=0;i<n;i++){
        cout<<*(p+i)<<" ";
    }
      return 0;
}