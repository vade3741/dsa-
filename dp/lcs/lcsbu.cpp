#include<bits/stdc++.h>
#include<iostream>
#define int long long int
using namespace std;
int lcs(string x,string y,int n,int m){
int t[n+1][m+1];
for(int i=0;i<=n;i++){
    t[i][0]=0;
}
for(int i=0;i<=m;i++){
    t[0][i]=0;
}
for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
        if(x[i-1]==y[j-1]){
            t[i][j]=1+t[i-1][j-1];
        }
        else{
            t[i][j]=max(t[i-1][j],t[i][j-1]);
        }
    }
}
for(int i=0;i<=x.length();i++){
for(int j=0;j<=y.length();j++){
cout<<t[i][j]<<" ";
}
cout<<endl;
}
return t[n][m];
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

cout<<lcs(x,y,x.length(),y.length())<<endl;

}
return 0 ;
}