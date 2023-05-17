#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
    //base case
    if(b==0){
        return a;
    }//recursive case
    return gcd(b,a%b);
}
int bigmod(long long int n,string m){
int res=0;
for(int i=0;i<m.length();i++){
    res=(res*10+(int)m[i]-'0')% n;

}
return res;

}
int main()
{
    long long int n;
    string m;
    cin>>n>>m;
    if(n==0){
     cout<<m<<endl;
     return 0;   
    }
   int c= bigmod(n,m);

  cout<< gcd(n,c)<<endl;
      return 0;
}