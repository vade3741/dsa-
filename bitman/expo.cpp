#include<iostream>
using namespace std;
int power_optimised(int a,int n){
    int ans=1;
    while(n>0){
       int last_bit =(n&1);
       if(last_bit ){
        ans=ans*a;
       }
       a=a*a;//sqaure up
       n=n>>1;//discard the last bit
    }return ans;
}
int main()
{
    int a,n;
    cin>>a;
    cin>>n;
    cout<<power_optimised(a,n);


      return 0;
}