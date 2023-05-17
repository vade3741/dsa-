#include<bits/stdc++.h>
#include<iostream>
#define int long long int
using namespace std;
void subsetsum(vector<int> &v,  vector<int> temp,int index,int target){
    if(index==v.size()){
      if(target==0){
        for(auto x:temp){
            cout<<x<<" ";
        }
      }        
        
        return;
    }
  
            temp.push_back(v[index]);
    subsetsum(v,temp,index+1,target-v[index]);
    temp.pop_back();
    subsetsum(v,temp,index+1,target);
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
int target;
cin>>target;
vector<int> temp;
subsetsum(v,temp,0,target);
}
return 0 ;
}