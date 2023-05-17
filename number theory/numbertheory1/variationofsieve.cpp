#include<iostream>
#include<bits/stdc++.h>
using namespace std;
const int n=1e7+10;
vector<int>prime(n,1);
vector<int>hp(n,0);
vector<int>lp(n,0);
void sieve(){
for(int i=2;i<=n;i++){
    if(prime[i]==1){
        lp[i]=hp[i]=i;
        for(int j=2*i;j<=n;j+=i){
            prime[j]=0;
            hp[j]=i;
            if(lp[j]==0){
                lp[j]=i;
            }
        }
    }
}
prime[1]=prime[0]=0;

for(int i=0;i<100;i++){
    if(prime[i]==1){
        cout<<i<<" ";
    }
    cout<<hp[i]<<" "<<lp[i]<<" ";
}
}
int main()
{
    sieve();
      return 0;
}