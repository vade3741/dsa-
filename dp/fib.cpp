#include<bits/stdc++.h>
#include<iostream>
#define int long long int
using namespace std;

//top down approach
int fib(int n,int *dp){
    
    if(n==0||n==1){
        return n;
    }
    if(dp[n]!=0){
        return dp[n];
    }
    
    return dp[n]=fib(n-1,dp)+fib(n-2,dp);
}
int32_t main()
{
int n;
cin>>n;
int dp[100]={0};
cout<<fib(n,dp)<<endl;
return 0 ;
}