#include<iostream>
#include<bits/stdc++.h>
using namespace std;
const int n =1e7+5;

vector<int> v(n,0);

vector<int> seieve(){
    v[0]=0;
    v[1]=0;
     v[2]=1;
     for(int i=3;i<=n;i+=2){
        v[i]=1;
     }
for(long long int i=3;i<=n;i+=2){
    if(v[i]==1){
        for(long long int j=i*i;j<=n;j+=2*i){
            v[j]=0;
        }
    }
}

vector<int>primes;
    primes.push_back(2);
    for(long long int i=3;i<=n;i+=2){
        if(v[i]==1){
            primes.push_back(i);
    }
    }
   


return primes;
}
vector<int> factorise(vector<int> &primes,long long int m){
vector<int> factors;
for(long long int i=0;i*i<=m;i++){
    if(m%primes[i]==0){
    while(m%primes[i]==0){
          m=m/primes[i];
    }
          factors.push_back(primes[i]);
}
}if(m!=1){
    factors.push_back(m);
}
    

return factors;
}
int main()
{
    int m;
    cin>>m;
    vector<int>prime1=seieve();
   
    vector<int> fac=factorise(prime1,m);
    for(auto x:fac){
        cout<<x<<" ";
    }

      return 0;
}