#include<bits/stdc++.h>
#include<iostream>
#define int long long int
using namespace std;
string lcs(string x,string y,int n,int m){
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

int a=n;
int b=m;
string s;
while(a>0&&b>0){
    if(t[a-1][b]==t[a][b-1]){
    
           s.push_back(x[a-1]);
           a--;
           b--;
    }
    else{
        if(t[a-1][b]>t[a][b-1]){
            a--;
        }
        else{
            b--;
        }
    }
    

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
string y;
cin>>x>>y;

string r= lcs(x,y,x.length(),y.length());
reverse(r.begin(),r.end());
cout<<r<<endl;


}
return 0 ;
}