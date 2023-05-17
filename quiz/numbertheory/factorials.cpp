#include<iostream>
#include<bits/stdc++.h>
using namespace std;
long long int fact(int n){
    if(n==0){
        return 1;
    }
    return n*fact(n-1);
}
int main()
{
long long int x=fact(100);
cout<<x;
      return 0;
}