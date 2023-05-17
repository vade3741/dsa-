#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// seive approach- generate a array containing prime numbers
#define int long long int
   int n;
     int p[1000005] = {0};
void prime_seieve()
{
    
    // marking all odd numbers as prime
    for (long long i = 3; i <= 100000; i += 2)
    {
        p[i] = 1;
    }
    // sieve
    for (int i = 3; i <= 100000; i += 2)
    {
        // if the current number is not marked(it is prime)
        if (p[i] == 1)
        {
            // mark all the multiples as not prime
            for (int j = 2 * i; j <= 100000; j = j + i)
            {
                p[j] = 0;
            }
        }
    }
    // special case
    p[2] = 1;
    p[1] = p[0] = 0;
}
int32_t main()
{
 
    cin >> n;
  
    prime_seieve();
    for (int i = 0; i <= n; i++)
    {
        if (p[i] == 1)
        {
            cout << i << " ";
        }
    }
    return 0;
}