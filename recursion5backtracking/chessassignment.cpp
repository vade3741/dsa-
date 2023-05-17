#include<iostream>
using namespace std;
int fib(int n){
    if(n==0||n==1){
        return n;
    }
    return fib(n-1)+fib(n-2);
}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
       cout<<"#"<<i+1<<" "<<":"<<" "<<fib(n+2)<<endl;
    }


      return 0;
}