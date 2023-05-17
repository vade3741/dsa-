#include<bits/stdc++.h>
#include<iostream>
#define int long long int
using namespace std;
void countsub(string x,string y){
    int count=0;
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
                     count++;
            }
            else{
                t[i][j]=max(t[i-1][j],t[i][j-1]);
            }
        }
    }
    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<count<<" ";
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
countsub(x,y);

}
return 0 ;
}