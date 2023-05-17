#include<iostream>
#include<bits/stdc++.h>
#define int long long int
using namespace std;

int binExpIter(int a,int b,int M){
    a=a%M; 
    // if a and m has large values 
    int ans=1;
    while(b>0){
    if(b&1){
ans=(ans*a)%M;
    }
    b=b>>1;
    a=(a*a)%M;
    }
    return ans;
}

//assume the inverse exists


int boringfact(int n,int p){
    int res=-1;
    if(p<=n){
        return 0;
    }
    else{
        for(int i=n+1;i<=(p-1);i++){
            int temp=binExpIter(i,p-2,p);
        
          res=(res*1ll* temp)%p;
        }
        
    }
        return (res+p);
}
int32_t main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,p;
        cin>>n>>p;
       int c= boringfact(n,p);
       cout<<c<<endl;
    }
      return 0;
}