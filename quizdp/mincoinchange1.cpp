#include<bits/stdc++.h>
#include<iostream>
#define int long long int
using namespace std;
int coinchange(vector<int> &coins,int target,int *dp){
    if(target==0){
        return 0;
    }
    int n=coins.size();
    int ans=INT_MAX;
    if(dp[n]!=-1){
        return dp[n];
    }
    for(int i=0;i<n;i++){
        if(target>=i){

        ans=min(ans,coinchange(coins,target-i,dp)+1);
        }
    }
    return dp[n]=ans;
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
int dp[100];
for(int i=0;i<100;i++){
    dp[i]=-1;
}
coinchange(v,target,dp);
}
return 0 ;
}