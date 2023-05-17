#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int binExpIter(int a,int b,int p){
    int ans=1;
    while(b>0){
    if(b&1){
ans=(ans*1ll*a)%p;
    }
    b=b>>1;
    a=(a*1ll*a)%p;
    }
    return ans;
}

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int a,n,p;
        cin>>a>>n>>p;
        int ans=a;
        
        for(int i=2;i<=n;i++){
            
             ans=binExpIter(ans,i,p);

        }ans=(ans%p);
        cout<<ans<<endl;
    }
      return 0;
}