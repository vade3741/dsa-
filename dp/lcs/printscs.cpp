#include<bits/stdc++.h>
#include<iostream>
#define int long long int
using namespace std;
string supersequence(string x,string y){
int n=x.length();
int m=y.length();
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
for(int i=0;i<=n;i++){
    for(int j=0;j<=m;j++){
        cout<<t[i][j]<<' '; 
    }
    cout<<endl;
}
int a=n;
int b=m;
string s;
while(a>0 &&b>0){
    if(x[a-1]==y[b-1]){
           s.push_back(x[a-1]);
           a--;
           b--;
    }
    else{
        if(t[a-1][b]>t[a][b-1]){
            s.push_back(x[a-1]);
            a--;
        }
        else{
            s.push_back(y[b-1]);
            b--;
        }
    }
}
while(a>0){
    s.push_back(x[a-1]);
    a--;
}
while(b>0){
    s.push_back(y[b-1]);
    b--;
}
return s;
}
int32_t main()
{
int t;
cin>>t;
while(t--)
{
string x;
cin>>x;
string y;
cin>>y;

string r=supersequence(x,y);
reverse(r.begin(),r.end());
cout<<r<<endl;
}
return 0 ;
}