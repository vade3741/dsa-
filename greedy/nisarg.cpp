#include <bits/stdc++.h>
using namespace std;

int main() {
   int i,t,n;
   cin>>t;
   for(i=0;i<t;i++)
   {
       cin>>n;
       string b;
       int count = 0;
           cin>>b;
       for(int i=0;i<n;i++)
       {
           if(b[i]==0)
           {
               count++;
           }
      
       }
     
       float p = (120 - count)/(float)120;
    if(p >=0.75)
    {
        cout<<"YES"<<"\n";
    }
    else
    {
        cout<<"NO"<<"\n";
    }
       
       
   }
	return 0;
}