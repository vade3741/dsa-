#include<bits/stdc++.h>
#include<iostream>
#define int long long int
using namespace std;
int lcs(string x,string y,int n,int m,int **dp){
if(n==0||m==0){
    return 0;
}
if(x[n-1]==y[m-1]){
    return dp[n][m]=1+lcs(x,y,n-1,m-1,dp);
}
if(dp[n][m]!=0){
    return dp[n][m];
}
else{
    return dp[n][m]=max(lcs(x,y,n-1,m,dp),lcs(x,y,n,m-1,dp));
}
}
int32_t main()
{
int t;
cin>>t;
while(t--)
{
string x;
string y;
cin>>x>>y;
int  **dp;
         dp = new int*[x.length()+1];
         for (int i = 0; i < x.length()+1; i++)
        dp[i] = new int[y.length() + 1];
          for (int i = 0; i < x.length()+1; i++)
        for (int j = 0; j < y.length() + 1; j++)
            dp[i][j] = 0;
cout<<lcs(x,y,x.length(),y.length(),dp)<<endl;
for(int i=0;i<=x.length();i++){
for(int j=0;j<=y.length();j++){
cout<<dp[i][j]<<" ";
}
cout<<endl;
}
}
return 0 ;
}