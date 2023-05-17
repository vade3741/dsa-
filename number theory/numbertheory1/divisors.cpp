#include<iostream>
#include<bits/stdc++.h>
using namespace std;
const int n=1e5+10;
vector<int>prime(n,1);
vector<int>hp(n,0);
vector<int>lp(n,0);
vector<int>divisors[n];
int sum[n];
void sieve(){
for(int i=2;i<n;i++){
    
        
        for(int j=i;j<n;j+=i){
    divisors[j].push_back(i);
        sum[j]+=i;
            }
        }
    

prime[1]=prime[0]=0;

for(int i=1;i<10;i++){
    for(auto x:divisors[i]){
        cout<<x<<" ";
    }
    cout<<endl;
}
}
int main()
{
    sieve();
      return 0;
}