#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int multiply(int a,int n){
    if(n==0){
        return false;
    }
    if(n==1){
        return a;

    }
    return a+multiply(a,n-1);
}
int main()
{
    int a,n;
    cin>>a>>n;
    int c=multiply(a,n);
    cout<<c<<endl;
      return 0;
}