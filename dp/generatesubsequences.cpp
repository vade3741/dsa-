#include<bits/stdc++.h>
#include<iostream>
#define int long long int
using namespace std;
void subsequences(vector<int> &v,int n,int index,vector<int> & temp){
if(index==n){
    for(auto x:temp){
        cout<<x<<" ";

    }
    cout<<endl;
    return;
}
subsequences(v,n,index+1,temp);
temp.push_back(v[index]);
subsequences(v,n,index+1,temp);
temp.pop_back();
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
subsequences(v,n,0,temp);
}
return 0 ;
}