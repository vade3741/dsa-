#include<iostream>
#include<bits/stdc++.h>
using namespace std;
long long modfastexpo(long long a,long long  b,long long m){
    int res=1;
    while(b>0){
 if(b&1){
    res =(res*a)%m;
 }a=(a*a)%m;
 b=b>>1;
    }
    return res;
}

int main()
{
cout<<modfastexpo(5,3,100)<<endl;
      return 0;
}