#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void isprime(int *p)
{
    
     // marking all odd numbers as prime
    for (int i = 3; i <= 100000; i += 2)
    {
        p[i] = 1;
    }
    // sieve
    for (long long i = 3; i <= 100000; i += 2)
    {
        // if the current number is not marked(it is prime)
        if (p[i] == 1)
        {
            // mark all the multiples as not prime
            for (long long j = i * i; j <= 100000; j = j + i)
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
    
    int is_prime[1000000] = {0};
    isprime(is_prime);
    int cssum[1000000] = {0};

for (int i = 1; i <= 1000000; i++)
        {
            
            cssum[i]=cssum[i-1]+is_prime[i];
            
        

        }
        int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin>>a>>b;
       
        
       
       cout<<cssum[b]-cssum[a-1]<<endl;
    }
    return 0;
}