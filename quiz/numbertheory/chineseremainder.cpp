#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define int long long int
int inv(int a, int m)
{
    int m0 = m, t, q;
    int x0 = 0, x1 = 1;
  
    if (m == 1)
        return 0;
  
    // Apply extended Euclid Algorithm
    while (a > 1) {
        // q is quotient
        q = a / m;
  
        t = m;
  
        // m is remainder now, process same as
        // euclid's algo
        m = a % m, a = t;
  
        t = x0;
  
        x0 = x1 - q * x0;
  
        x1 = t;
    }
  
    // Make x1 positive
    if (x1 < 0)
        x1 += m0;
  
    return x1;
}
int32_t main()
{
    int n;
    cin>>n;
    
        int a[n];
        int rem[n];
    
            int mul=1;
        for(int i=0;i<n;i++){
            cin>>a[i];
        
            mul*=a[i];
            }
 int result = 0;
        for(int i=0;i<n;i++){
            
            cin>>rem[i];
            } 
             
            for (int i = 0; i < n; i++) {
        int pp = mul/ a[i];
        result += (rem[i] * inv(pp, a[i]) * pp);
    }
    cout<<(result%mul)<<endl;


    
      return 0;
}