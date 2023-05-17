#include<bits/stdc++.h>
#include<iostream>
#define int long long int
using namespace std;
int minstepone(int n,vector<int> dp){
if(n==1){
    return 0;
}
int op1=INT_MAX;
int op2=INT_MAX;
int op3=INT_MAX;
if(dp[n]!=-1){
    return dp[n];
}
if(n%3==0){
 op1=minstepone(n/3,dp);
}
if(n%2==0){
    op2=minstepone(n/2,dp);
}

    op3=minstepone(n-1,dp);

return dp[n]=min (op1,min(op2,op3))+1;
}
int32_t main()
{
int t;
cin>>t;
while(t--)
{
int n;
cin>>n;
vector<int> dp(n+1,-1);
cout<<minstepone(n,dp)<<endl;;

}
return 0 ;
}