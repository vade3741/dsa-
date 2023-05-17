#include<iostream>
#include<bits/stdc++.h>
using namespace std;
long long modularexpo( long long int a,long long int b,long long int m){
    int mul=1;
    while(b>0){
        if((b&1)){
          mul=(mul*a)%m;
        }
        a=(a*a)%m;
        
        b=b>>1;
    }
    return mul;
}
int main()
{
    int a,
    
    
    m;
    cin>>a;
    m=1000000007;
   long long int c=modularexpo(a,m-2,m);
    cout<<c<<endl;
      return 0;
}