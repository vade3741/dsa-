#include<bits/stdc++.h>
#include<iostream>
#define int long long int
using namespace std;
int vine(vector<int> &v,int i,int j){
int n=v.size();
int year=n;
int dp[n+1][n+1];
for(int i=0;i<n;i++){
  dp[i][i]=year*v[i];
    
}
year--;
for(int i=2;i<=n;i++){
    int start=0;
    int end=n-i;
    while(end>=start){
        int endwindow=start+i-1;
        dp[start][endwindow]=max(v[start]*year+dp[start+1][endwindow],v[endwindow]*year+dp[start][endwindow-1]);
start++;
    }
    --year;
  
}
return dp[0][n-1];
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

cout<<vine(v,0,n-1)<<endl;
}
return 0 ;
}