#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int count =0;
    int sum=0;
    //count of divisor an d sum of divisors
    for(int i=1;i*i<=(n);i++){
    // for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            cout<<i<< " "<<n/i<<endl;
            count++;
            sum+=i;
            if(n/i!=i){
            sum+=n/i;
                count++;
            }
        }
    }cout<<count<<" "<<sum<<endl;
    //it is o(root N) time complexity
      return 0;
}