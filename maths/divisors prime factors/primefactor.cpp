#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> prime_factors;
for(int i=2;i<n;i++){
    while(n%i==0){
        prime_factors.push_back(i);
        n=n/i;
    }
}
for(auto x:prime_factors)
{
    cout<<x<<endl;
}//we are finding all the prime facotrs in o(n)
// time complexity
      return 0;
}