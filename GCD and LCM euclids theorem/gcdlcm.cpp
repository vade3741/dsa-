#include<iostream>
#include<bits/stdc++.h> 

//using recursion
int gcd(int a,int b){
//R-->>remainder or a%b
if(b==0)return a;
return gcd(b,a%b);
}

using namespace std;
int main()
{
    cout<<(12,4)<<endl;
    cout<<(18,12)<<endl;
    cout<<(18*12)/gcd(18,12)<<endl;
    //inbuilt function of gcd
    cout<<__gcd(12,18)<<endl;
    //gcd of three numbers
    cout<<__gcd(36,__gcd(18,12));

      return 0;
}