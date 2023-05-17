//There are N children and K toffees.k<n count the number of ways
//to distribute toffee among n students such that each students get 1 toffee only
//1 toofee only--> nCl,%M,M=10^9+7
//n<10^6,k<N<10^6
//q<10^5
//n!/(n-r)!(r)!
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
const int n=1e5+10;
const int M=1e9+7;
int fact[n];
int binExpIter(int a,int b){
    int ans=1;
    while(b>0){
    if(b&1){
ans=(ans*1ll*a)%M;
    }
    b=b>>1;
    a=(a*1ll*a)%M;
    }
    return ans;
}
int main()
{ 
    fact[0]=1;
    for(int i=1;i<n;i++){
        fact[i]=(fact[i-1]*1ll*i)%M;
    }
    int q;
    cin>>q;
    for(int i=0;i<q;i++){
        int a,k;
        cin>>a>>k;
        int ans=1;
        ans=(ans*1ll*fact[a])%M;
         
        
        int denom=(1ll*fact[a-k])%M;
    int inverse=binExpIter(denom,M-2);
 
        ans=(ans*1ll*(inverse)%M);
        cout<<ans<<endl;
            
    }
      return 0;
}