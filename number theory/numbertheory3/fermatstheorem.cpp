#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define int long long int
int mod=10000000007;
int stringtoint(string a,int mod){
int ans=0;
for(int i=0;i<a.size();i++){
    ans=(ans*10)%mod+(a[i]-'0');
    ans%=mod;
}
return ans;
}int pow(int a,int n,int mod){
    int ans;
    int c;
    if(n==0){
        return 1;
    }
      c =  pow(a,n/2,mod);
      c%=mod;
      c=(c*c)%mod;
   if(n&1){
          
              ans = (a*c)%mod;
   }else{
          ans =c; 
   }
   return ans;
}//complexity is o(logn)
int32_t main()
{
    int t;
    cin>>t;
             string a,b;
    for(int i=0;i<t;i++){
             cin>>a>>b;
           int c=stringtoint(a,mod);
           int d=stringtoint(b,mod-1);
           int ans=pow(c,d,mod);
           cout<<ans<<endl;

    }
      return 0;
} 