#include<bits/stdc++.h>
#include<iostream>
#define int long long int
using namespace std;
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
int dp[200][200];
memset(dp,0,sizeof dp);
for(int i=1;i<n-1;i++){
    int r=0, c=i;
    while(c<n-1){
        int val=INT_MAX;
for(int k=r;k<c;k++){
val =min(val,dp[r][k]+dp[k+1][c]+v[r]*v[k+1]*v[c+1]);
}
dp[r][c]=val;
r++;
c++;
    }
    
}
cout<<dp[0][n-2];
}
return 0 ;
}