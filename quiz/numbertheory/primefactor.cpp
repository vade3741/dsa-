#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int>> primes;
void primefactor(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
        int count=0;
        while(n%i==0){
            count++;
            n=n/i;
        }
        primes.push_back(make_pair(i,count));
    }
    }
    if(n!=1){
        primes.push_back(make_pair(n,1));
    }
}
int main()
{
    int n;
    cin>>n;
    primefactor(n);
    for(auto x:primes ){
        cout<<x.first<<" "<<x.second<<endl;
    }
      return 0;
}