#include<bits/stdc++.h>
#include<iostream>
#define int long long int
using namespace std;
int cnt=0;
int vine(vector<int>&vines,int i,int j,int y,int *dp[],int n){
cnt++;
if(i>=j){
    return y*vines[i];
    }
    if(dp[i][j]!=-1){
        return dp[i][j];
    }

int ans= max(vines[i]*y+vine(vines,i+1,j,y+1,dp,n),vines[j]*y+vine(vines,i,j-1,y+1,dp,n));

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
for(int i=0;i<n;i++)
{
int temp;
cin>>temp;
v.push_back(temp);
}
int  **dp;
         dp = new int*[n+1];
         for (int i = 0; i < n+1; i++)
        dp[i] = new int[n + 1];
          for (int i = 0; i < n+1; i++)
        for (int j = 0; j < n + 1; j++)
            dp[i][j] = -1;
cout<<vine(v,0,n-1,1,dp,n)<<endl;
cout<<cnt<<endl;
}

return 0 ;
}