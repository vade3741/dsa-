#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t,x,y,z;
   cin>>t;
   for(int i=0;i<t;i++)
   {
       cin>>x>>y>>z;
       int n = min(x,min(y,z));
       
       if(n==x)
       {
           cout<<"alice"<<"\n";
       }
       else if(n==y)
       {
           cout<<"bob"<<"\n";
       }
       else
       {
           cout<<"charlie"<<"\n";
       }
   }
      return 0;
}