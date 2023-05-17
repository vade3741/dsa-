#include<iostream>
using namespace std;
const int M=1e9+7;
#define int long long int
int binExpIter(int a,int b){
    a=a%M; 
    // if a and m has large values 
    int ans=1;
    while(b>0){
    if(b&1){
ans=(binmul(ans,a))%M;
    }
    b=b>>1;
    a=(a,a)%M;
    }
    return ans;
}
int binmul(int a,int b){
    int ans=0;
    while(b>0){
    if(b&1){
ans=(ans+a)%M;
    }
    b=b>>1;
    a=(a+a)%M;
    }
    return ans;
}
int32_t main()
{int a,n;
    cin>>a;
    cin>>n;
    cout<<binExpIter(a,n)<<endl;
      return 0;
}