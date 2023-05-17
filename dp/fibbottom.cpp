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
int fibbu(int n){
             int dp[100]={0};
        dp[0]=0;
        dp[1]=1;
        for(int i=2;i<=n;i++){
            dp[i]=dp[i-1]+dp[i-2];
        }
        
        return dp[n];

}
//we have reduced timecomplexity fromo(2^n) to o(n) linear
//we can also reduce the space because to compute new problem we only need two index we dont need entire array
int spaceoptimisation(int n){
  if(n==0||n==1){
        return n;
    }
    int a=0;
    int b=1;
    int c;
    for(int i=2;i<=n;i++){
        c=a+b;
        a=b;
        b=c;

    }
    return c;


}
int32_t main()
{
int n;
cin>>n;
int dp[100]={0};
cout<<fib(n,dp)<<endl;
cout<<spaceoptimisation(n)<<endl;
return 0 ;
}