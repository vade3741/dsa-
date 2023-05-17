#include<bits/stdc++.h>
#include<iostream>
#define int long long int
using namespace std;
 bool allocatepages(int mid,int n,vector<int> arr,int m){
        int k=1;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
    if(arr[i]>mid){
        return false;
    }
            if(sum>mid){
                k++;xoz
cin>>t;
while(t--)
{
int n;
cin>>n;
vector<int>v;
for(int i=0;i<n;i++)
{
int temp;
cin>>temp;
v.push_back(temp);
}
int m;
cin>>m;
 int mini=INT_MAX;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=v[i];
            mini=min(mini,v[i]);
        }
        int low=mini;
        int high=sum;
        int res=0;
        while(high>=low){
            int mid=(high+low)/2;
            if(allocatepages(mid,n,v,m)==true){
                res=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
    cout<<res<<" ";
}
return 0 ;
}