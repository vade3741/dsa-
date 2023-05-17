#include<bits/stdc++.h>
#include<iostream>
#define int long long int
using namespace std;
int coinchange(vector<int> &coins,int amount,int n){
if(n==0||amount==0){
    return 0;
}

if(amount>=coins[n-1]){
    return min(coinchange(coins,amount,n-1),coinchange(coins,amount-coins[n-1],n))+1;
}
return coinchange(coins,amount,n-1);
// return min(op1,op2);
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
int amount ;
cin>>amount;
cout<<coinchange(v,amount,n)<<endl;;
}
return 0 ;
}