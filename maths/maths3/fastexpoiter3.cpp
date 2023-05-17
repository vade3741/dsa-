#include<iostream>
using namespace std;
const int M=1e9+7;
int binExpIter(int a,int b,int m){
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
{int a,n,c;

    cin>>a;
    cin>>n>>c;
    cout<<binExpIter(a,binExpIter(n,c,M-1),M)<<endl;
      return 0;
}