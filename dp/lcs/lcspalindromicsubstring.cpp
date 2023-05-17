#include<bits/stdc++.h>
#include<iostream>
#define int long long int
using namespace std;
int lcssub(string x,string y,int count,int n,int m,int **dp){
if(n==0||m==0){
    return count;
}
if(x[n-1]==y[m-1]){

 return dp[n][m]=max(count,lcssub(x,y,count+1,n-1,m-1,dp));
}
if(dp[n][m]!=0){
    return dp[n][m];
}
else{

 return dp[n][m]=max(count,max(lcssub(x,y,0,n-1,m,dp),lcssub(x,y,0,n,m-1,dp)));
}
 
}
int32_t main()
{
int t;
cin>>t;
while(t--)
{
string x;
cin>>x;
string y=x;
int count=0;
reverse(y.begin(),y.end());
int  **dp;
         dp = new int*[x.length()+1];
         for (int i = 0; i < x.length()+1; i++)
        dp[i] = new int[y.length() + 1];
          for (int i = 0; i < x.length()+1; i++)
        for (int j = 0; j < y.length() + 1; j++)
            dp[i][j] = 0;
lcssub(x,y,count,x.length(),x.length(),dp);
for(int i=0;i<=x.length();i++){
    for(int j=0;j<=y.length();j++){
cout<<dp[i][j]<<" ";
    }
    cout<<endl;
}
int a=x.length(); 
int b=y.length();
string v;
while(a>0&&b>0){
    if(x[a-1]==y[b-1]){
v.push_back(x[a-1]);
a--;
b--;
    }
    else if(dp[a-1][b]>dp[a][b-1]){
              a--;
    }
    else{
        b--;
    }
}
cout<<v<<" ";

}
return 0 ;
}