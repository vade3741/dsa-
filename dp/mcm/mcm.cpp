#include<bits/stdc++.h>
#include<iostream>
#define int long long int
using namespace std;
int mcm(vector<int> &v,int i,int j,int **dp){
    int n=v.size();
if(i>=j){
    return 0;
}
int ans=INT_MAX;
if(dp[i][j]!=0){
    return dp[i][j];
}
for(int k=i;k<j;k++){

ans=min(ans,mcm(v,i,k,dp)+mcm(v,k+1,j,dp)+v[i-1]*v[k]*v[i]);
}
return dp[i][j]=ans;
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
int  **dp;
         dp = new int*[n+1];
         for (int i = 0; i < n+1; i++)
        dp[i] = new int[n + 1];
          for (int i = 0; i <n+1; i++)
        for (int j = 0; j < n+ 1; j++)
            dp[i][j] = 0;
for(int i=0;i<n;i++)
{
int temp;
cin>>temp;
v.push_back(temp);
}
mcm(v,1,n-1,dp);
}
return 0 ;
}