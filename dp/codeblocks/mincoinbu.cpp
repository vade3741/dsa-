#include<bits/stdc++.h>
#include<iostream>
#define int long long int
using namespace std;
int coinchange(vector<int> &coins,int amount){
int dp[amount+1];
dp[0]=0;
for(int i=1;i<=amount;i++){
    dp[i]=INT_MAX-1;
    for(int j=0;j<coins.size();j++){

if(i>=coins[j]){
    dp[i]=min(dp[i],dp[i-coins[j]]+1);
}
    }
}
return dp[amount];
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
int target;
cin>>target;
cout<<coinchange(v,target)<<endl;
}
return 0 ;
}