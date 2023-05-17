#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int pow(int a,int n){
    int ans;
    int c;
    if(n==1){
        return a;
    }
      c =  pow(a,n/2);
   if(n&1){
          
              ans = a*c*c;
   }else{
          ans =c* c; 
   }
   return ans;
}//complexity is o(logn)
int main()
{
    int n;

    cin>>n;
    cout<<pow(2,n+1)-2<<endl;
     
      return 0;
}