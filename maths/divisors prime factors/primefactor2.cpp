#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{ 
    //for a composite number there always exist a prime number for it
    //before root n 
    //ham divide krte jayege root n tak prime dodege agar last main one bachega agar perfect squre nahi to ek prime number bachega vo vapas us prime ke power 1 hoge se dalna padega vector main
    int n;
    cin>>n;
    vector<int> prime_factors;
for(int i=2;i*i<n;i++){
    while(n%i==0){
        prime_factors.push_back(i);
        n=n/i;
    }
}if(n>1){
    prime_factors.push_back(n);
}
for(auto x:prime_factors)
{
    cout<<x<<endl;
}//we are finding all the prime facotrs in o(root n)
// time complexity
      return 0;
}