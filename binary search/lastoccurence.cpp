#include<iostream>
using namespace std;
int lastoccurence(int arr[],int n,int key){
int start;
int end;
int mid;
int ans=-1;
//update in a direction that ans values gets higher and higher 
start=0;
end=n-1;
while(start<=end){
mid=start-(start+end)/2;
if(arr[mid]==key){
      ans=mid;
    start=mid+1; //dont stop explore the right part of the array
}else if(arr[mid]>key){
      end=mid-1;
}else{
      start=mid+1;
}
}
return ans;
}
int main()
{
      int arr[]={1,2,5,8,8,8,8,8,10,12,15,20};
      int n=sizeof(arr)/sizeof(int);
      int key;
      cin>>key;
      cout<<lastoccurence(arr,n,key)<<endl;
      return 0;
}