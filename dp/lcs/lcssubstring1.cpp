#include<bits/stdc++.h>
#include<iostream>
#define int long long int
using namespace std;
int lcs(string x,string y,int n,int m,int count){
int t[n+1][m+1];
for(int i=0;i<=n;i++){
    t[i][0]=0;
}
for(int i=0;i<=m;i++){
    t[0][i]=0;
}
int result=INT_MIN;
for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
        if(x[i-1]==y[j-1]){
            t[i][j]=t[i-1][j-1]+1;
            result=max(result,t[i][j]);
        }
        else{
            t[i][j]=0;
        }
    }
}
return result;
}
int32_t main()
{
int t;
cin>>t;
while(t--)
{
string x;
string y;
cin>>x>>y;

cout<<lcs(x,y,x.length(),y.length(),0)<<endl;
}
return 0 ;
}