#include<iostream>
#include<bits/stdc++.h>
const int  MOD =1e9+7;
#define int long long int
using namespace std;

int help(int n, int m, vector<int> &dp)
	{
	    const int  MOD =1e9+7;
	    if(n<=0)
return 0;
if(n>=1 && n<m)
return 1;
if(n==m)
return 2;
if(dp[n]!=-1)
{
    return dp[n];
}
return dp[n]=(help(n-1,m,dp)%MOD+help(n-m,m,dp)%MOD)%MOD;
	}
int tiling(int n, int m)
	{
	    vector<int> dp(n+1,-1);
	    return help(n,m,dp);
	}
int32_t main()
{
    int t;
    cin>>t;
    while(t--){
      int n,m;
      cin>>n>>m;
      cout<<tiling(n,m)<<endl;
    }
      return 0;
}