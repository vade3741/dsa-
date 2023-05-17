#include<bits/stdc++.h>
#include<iostream>
#define int long long int
using namespace std;
string printpal(string s){
    int n=s.length();
    int t[n+1][n+1];
    for(int i=0;i<=n;i++){
        t[i][0]=0;
    }
    for(int i=0;i<=n;i++){
        t[0][i]=0;
    }
    string c=s;
    reverse(c.begin(),c.end());
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
             if(s[i-1]==c[j-1]){
                t[i][j]=1+t[i-1][j-1];
             }
             else{
                t[i][j]=max(t[i-1][j],t[i][j-1]);
             }
        }
    }
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }
    int a=n;
    int b=n;
    string v;
    while(a>0&&b>0){
          if(s[a-1]==c[b-1]){
            v.push_back(c[a-1]);
                 a--;
                 b--;
          }
          else if(t[a-1][b]>t[a][b-1]){
            a--;
          }
          else{
            b--;
          }
    }
    return v;
}
int32_t main()
{
int t;
cin>>t;
while(t--)
{
    string s;
    cin>>s;
    cout<<printpal(s)<<endl;

}
return 0 ;
}