#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int powers(int a,int n){
    if(n==0){
        return 1;
    }
    int c=pow(a,n/2);
    if(n&1){
        return a*c*c;
    }
    return c*c;
}
int main()
{
    int a;
    cin>>a;
    int  n;
    cin>>n;
    int c=powers(a,n);
    cout<<c<<" ";
      return 0;
}