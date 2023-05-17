#include<bits/stdc++.h>
#include<iostream>
#define int long long int
using namespace std;
int lcs(string x,string y,int n,int m,int count){
if(n==0||m==0){
    return count;
}
if(x[n-1]==y[m-1]){
    return max(count,lcs(x,y,n-1,m-1,count+1));
}

else{
    return max(count,max(lcs(x,y,n,m-1,0),lcs(x,y,n-1,m,0)));
}
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