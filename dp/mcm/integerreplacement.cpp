#include<bits/stdc++.h>
#include<iostream>
#define int long long int
using namespace std;
int dp[100000000+1];
int32_t main()
{
int t;
cin>>t;
while(t--)
{
int n;
cin>>n;
cout<<"As";
dp[1]=0;
for(int i=2;i<=n;i++){
if(i%2==0){
    dp[i]=dp[i/2]+1;
}
else{
    dp[i]=min(dp[i/2+1],dp[i-1])+1;
}
}
for(int i=1;i<=n;i++){
    cout<<dp[i]<<" ";
}
}
return 0 ;
}