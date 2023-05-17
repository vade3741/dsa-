#include<bits/stdc++.h>
#include<iostream>
#define int long long int
using namespace std;
void subsetsum(vector<int> &v,vector<int> temp,int target,int i){
if(i==v.size()){
if(target==0){
    for(auto x:temp){
        cout<<x<<" ";
    }
    cout<<endl;
}
    return;
}
temp.push_back(v[i]);
if(target-v[i]>=0){
subsetsum(v,temp,target-v[i],i+1);
}
temp.pop_back();
subsetsum(v,temp,target,i+1);

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
subsetsum(v,temp,target,0);
}
return 0 ;
}