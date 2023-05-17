#include <iostream>
#include <bits/stdc++.h>
using namespace std;
const int LIMIT = 1000000;
long long int arr[LIMIT] = {0};
const long long int MOD =1e9+7;
vector<long long int> prime_factors()
{
    vector<long long int> primes;
    for (long long int i = 3; i <= LIMIT; i += 2)
    {
        arr[i] = 1;
    }
    for (long long int i = 3; i <= LIMIT; i += 2)
    {
        if (arr[i] == 1)
        {
            for (long long int j = 2 * i; j <= LIMIT; j += i)
            {
                arr[j] = 0;
            }
        }
    }
    arr[2] = 1;
    primes.push_back(2);
    for (long long int i = 3; i <= LIMIT; i += 2)
    {
        if (arr[i] == 1)
        {
            primes.push_back(i);
        }
    }
    return primes;
}
long long int factorise(long long int a[], vector<long long int> &primes, int n)
{
    
    // int p = primes[0];
   long long  int i = 0;
   long long  int mul=1;
   long long  int count = 0;
    long long int num=0;
    for(long long int j=0;j<=1000;j++){
        
        num=0;
    for (long long int i = 0; i < n; i++)
    {
        count = 0;
        if (a[i] % primes[j] == 0)
        {
            while (a[i] % primes[j] == 0)
            {
                a[i] = a[i] / primes[j];
                count++;
            }
        }
        num+=count;
    }
        // cout<<num<<" ";
    if(num>0)
        mul=(mul*1ll*(num+1))%MOD;
    }
    return mul;
}
int main()
{
    

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        long long int n;
        cin >> n;
        long long int a[n];
        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
        }
        
        vector<long long int> primes = prime_factors();
int factors = factorise(a, primes, n);
   cout<<factors<<endl;     
    }
    return 0;
}