#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int binarysearch(vector<int> v ,int key,int left ,int right){

if(left>right){
    return false;
}
int mid =left +(right -left)/2;
if(v[mid]==key){
    return mid;
}
if(key>v[mid]){
    return binarysearch(v,key,mid+1,right);
}
if(key<v[mid]){
   return binarysearch(v,key,left,mid-1);
}
return -1;
}
int main()
{
    vector<int> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        v.push_back(temp);
        }
  int key;
  cin>>key;
        sort(v.begin(),v.end());
       int c= binarysearch(v,key,0,n-1);
       cout<<c<<endl;
      return 0;
}