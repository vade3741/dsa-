#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    // n-->prime if it is divisible only by 1 and itself
      int n; 
      cin>>n;
      bool is_prime =true;
      for(int i=2;i<n;i++){
        if(n%i==0){
            is_prime=false;
            break;
        }
      }
      cout<<is_prime<<endl;
      //time complexity of this o(n)
      return 0;
}