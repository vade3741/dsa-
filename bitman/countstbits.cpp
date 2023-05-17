#include<iostream>
using namespace std;

//given a numbwe N,find number of set bits in binary represntation of it
//n=13,binary=1101.output=3
int countbits(int n){
    int ans=0;
    while(n>0){
ans+=(n&1);
n=n>>1;
    }
return ans;
}
int countbitsfast(int n){
    int ans=0;
    while ((n>0))
    {
        
    
    n=n&(n-1);
ans++;
}
return ans;
}
int main()
{int n;
cin>>n;
cout<<countbits(n);
//inbuilt function
cout<<__builtin_popcount(n)<<endl;
      return 0;
}