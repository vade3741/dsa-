#include<bits/stdc++.h>
#include<iostream>
#define int long long int
using namespace std;
int subsetsum(vector<int> &v,vector<int> temp,int target,int i){
if(i==v.size()){
if(target==0){
    
    return 1;
}
return 0;
}
temp.push_back(v[i]);

int l=subsetsum(v,temp,target-v[i],i+1);
temp.pop_back();

 int r =subsetsum(v,temp,target,i+1);
return l+r;
}
int32_t main()
{
int t;
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
vector<int> temp;
int target;
cin>>target;
cout<<subsetsum(v,temp,target,0)<<endl;
}
return 0 ;
}