#include<iostream>
using namespace std;
int searcharray(int *a,int start,int end,int key){
if(start>end){
 return -1;
}
int mid =(start+end)/2;
if(a[mid]==key){
    return mid;
}
else if(a[mid]>key){
return searcharray(a,start,mid-1,key);
}
else{
return searcharray(a,mid+1,end,key);
}
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    cout<<searcharray(arr,0,n-1,key);
      return 0;
}