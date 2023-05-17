
#include <iostream>
#include <bits/stdc++.h>
using namespace std;


// C(n, r) = [n * (n-1) * .... * (n-r+1)] / [r * (r-1) * .... * 1]
long long printNcR(int n, int r)
{

    // p holds the value of n*(n-1)*(n-2)...,
    // k holds the value of r*(r-1)...
    long long p = 1, k = 1;

    // C(n, r) == C(n, n-r),
    // choosing the smaller value
    if (n - r < r)
        r = n - r;

    if (r != 0)
    {
        while (r)
        {
            p *= n;
            k *= r;

            // gcd of p, k
            long long m = __gcd(p, k);

            // dividing by gcd, to simplify
            // product division by their gcd
            // saves from the overflow
            p /= m;
            k /= m;

            n--;
            r--;
        }

        // k should be simplified to 1
        // as C(n, r) is a natural number
        // (denominator should be 1 ) .
    }

    else
        p = 1;

    // if our approach is correct p = ans and k =1
    return p;
}

// Driver code
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
int k,n;
cin>>n>>k;
   long long int d= printNcR(n-1, k-1);
    cout<<d<<endl;
    }


    return 0;
}