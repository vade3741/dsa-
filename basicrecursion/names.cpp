#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int name(int n){
    int sum=0;
    if(n==0){
        return 0;
        }
        if(n==1||n==2)return 1;

   return name(n-1)+ name(n-2);

}
int main()
{
    int n;
    cin>>n;
cout<<name(n)<<endl;
      return 0;
}