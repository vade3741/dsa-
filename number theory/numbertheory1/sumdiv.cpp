#include<iostream>
#include<bits/stdc++.h>
using namespace std;
const int n =1e7+5;

vector<int> v(n,0);

int primeexpo(int a,int m){
    int ans=1;
    while(m>0){
if(m&1){
ans=ans*1ll*a;
}m=m>>1;
a=a*1ll*a;
    }
    return ans;
}
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
vector<int> num_div(vector<int> &primes,int m){
    vector<int>div;
    int count;
    for(long long int i=0;i*i<=m;i++){
    count=0;
    while(m%primes[i]==0){
          m=m/primes[i];
          count++;
    }div.push_back(count);
          

}if(m!=1){
    div.push_back(1);
}

return div;
}
int num_div1(vector<int> &primes,int m){

    int count;
    int div=1;
    for(long long int i=0;i*i<=m;i++){
    count=0;
    while(m%primes[i]==0){
          m=m/primes[i];
          count++;
    }div*=(count+1);
     
          

}if(m!=1){
    div*=2;
}

return div;
}
int sum_div(vector<int> &factors,vector<int>&divisor){
    int ans=1;
    int k;

    for(int i=0;i<factors.size();i++){
k=(primeexpo(factors[i],divisor[i]+1))-1;

k=k/(factors[i]-1);
cout<<k<<" ";

ans=ans*k;
    }
return ans;
}
int main()
{
    int m;
    cin>>m;
    vector<int>prime1=seieve();
   
    vector<int> fac=factorise(prime1,m);
    // for(auto x:fac){ 
    //     cout<<x<<" ";
    // }
  vector<int>sume=  num_div(prime1,m);
    int a=num_div1(prime1,m);
    //  cout<<a;
     int b=sum_div(fac,sume);
      cout<<b<<endl;
      return 0;
}