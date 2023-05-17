#include<iostream>
using namespace std;
void merge(int *arr,int start,int end){
int mid =(start+end)/2;
int i=start;
int j=mid+1;
int k=start;
int temp[100];
while(i<=mid&&j<=end){
    if(arr[i]>arr[j]){
                temp[k]=arr[i];
                k++;
                i++;
    }
    else{
        temp[k]=arr[j];
        j++;
        k++;
    }
}
while(i<=mid){
    temp[k]=arr[i];
    k++;
    i++;
}
while(j<=end){
    temp[k]=arr[j];
    j++;
    k++;
}
for(int i=start;i<=end;i++){
    arr[i]=temp[i];
}
}
void merge___sort(int *arr,int start,int end){
//if 1 or less than that elements remaining 
if(start>=end){
    return ;
}int mid =(start+end)/2;
merge___sort(arr,0,mid);
merge___sort(arr,mid+1,end);
merge(arr,start,end);
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }merge___sort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
      return 0;
}