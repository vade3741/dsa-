#include<bits/stdc++.h>
#include<iostream>
#define int long long int
using namespace std;
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
vector<int>v1;
for(int i=0;i<n;i++)
{
int temp;
cin>>temp;
v1.push_back(temp);
}
vector<int> temp;
int k=0;
int count=0;
int i=0;
int j=0;
while(i<=k){
    while(j<=k){
if(v[i]==v1[j]){
    count++;
}
j++;
    }
    i++;
    k++;
}
for(auto x:temp){
    cout<<x<<" ";
}
}
return 0 ;
}