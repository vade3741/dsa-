#include<bits/stdc++.h>
#include<iostream>
#define int long long int
using namespace std;
int minstepone(int n){
int dp[n+1];
for(int i=0;i<n;i++){
    dp[i]=0;
}
dp[1]=0;
for(int i=2;i<=n;i++){
    int op1=INT_MAX;
    int op2=INT_MAX;
    int op3=INT_MAX;
if(n%3==0){
    op1=dp[i/3];
}
if(n%2==0){
    op2=dp[i/2];
}
op3=dp[i-1];
dp[i]=min(op1,min(op2,op3))+1;
}
return dp[n];
}
int32_t main()
{
int t;
cin>>t;
while(t--)
{
int n;
cin>>n;
cout<<minstepone(n)<<endl;;

}
return 0 ;
}