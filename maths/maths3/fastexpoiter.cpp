#include<iostream>
using namespace std;
const int M=1e9+7;
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
{int a,n;
    cin>>a;
    cin>>n;
    cout<<binExpIter(a,n)<<endl;
      return 0;
}