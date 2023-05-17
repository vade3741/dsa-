#include<iostream>
using namespace std;

int binExpIter(int a,int b,int M){
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
{int a,n,M;
    cin>>a;
    cin>>n>>M;
    cout<<binExpIter(a,n,M)<<endl;
      return 0;
}