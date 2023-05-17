#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int p,q;
        cin>>p;
        cin>>q;
        int sum=0;

        for(int i=p;i<=q;i++){
        sum+=__builtin_popcount(i);
        }cout<<sum<<endl;
    }

      return 0;
}