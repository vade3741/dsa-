#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define long long
const long M=1000000007;//modulo
 map<long, long> F;
 long f(long n){
    if(F.count(n)){
        return F[n];
    }long k=n/2;
    if(n%2==0){//n=2*k
        return F[n]=(f(k)*f(k)+f(k-1)*f(k-1))%M;
    }else{
        return F[n]=(f(k)*f(k-1)+f(k-1)*f(k))%M;
//n=2*k+1

    }
 }
int main()
{long n;
F[0]=F[1]=1;
while(cin>>n){
cout<<(n==0?0:f(n-1))<<endl;
}
      return 0;
}//the complexity of this code is o(logn *loglogn)