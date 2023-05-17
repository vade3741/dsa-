#include<bits/stdc++.h>
#include<iostream>
#define int long long int
using namespace std;

int minstepBU(int n){
    int dp[100]={0};
    dp[1]={0};
int op1=INT_MAX;
int op2=INT_MAX;
int op3=INT_MAX;
    for(int i=2;i<=n;i++){
        if(n%2==0){

        op2=dp[i/2];
        }
        if(n%3==0){

        op3=dp[i/3];
        }
        op1=dp[i-1];
        dp[i]=min(op3,min(op1,op2))+1;
    }
    return dp[n];
}
int32_t main()
{

return 0 ;
}