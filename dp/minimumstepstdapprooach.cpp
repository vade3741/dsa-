#include<bits/stdc++.h>
#include<iostream>
#define int long long int
using namespace std;

int minsteps(int n,int *dp){
    if(n==1){
        return 0;
    }
    int op1=INT_MAX;
    int op2=INT_MAX;
   int op3=INT_MAX;
   if(dp[n]!=0){
    return dp[n];
   }
    if(n%3==0){
         op1=minsteps(n/3,dp)+1;
    }
    if(n%2==0){
        op2= minsteps(n/2,dp)+1;
    }

     op3=minsteps(n-1,dp)+1;
    
    return min(op1,min(op2,op3));
}
int32_t main()
{

int n;
cin>>n;
int dp[100]={0};
cout<<minsteps(n,dp);
return 0 ;
}