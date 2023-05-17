#include <iostream>
#include <bits/stdc++.h>

using namespace std;

vector<long long int> prime_sieve(long long int *arr, long long int n)
{
    arr[0]=arr[1]=0;
    arr[2]=1;
    for (long long int i = 3; i <= n; i += 2)
    {
        arr[i] = 1;
    }


    for (long long int i = 3; i <= n; i += 2)
    {
        if (arr[i] == 1)
        {
        
            for (long long int j = i * 1ll * i; j <= n; j += 2 * i)
            {
                arr[j] = 0;
            }
        }
    }
    vector<long long int> primes;
      primes.push_back(2);
    for(long long int  i=3; i<=n; i++){
        if(arr[i]==1){
            primes.push_back(i);
        }
    }
    return primes;
}
vector<pair<long long int, long long int>> factorize(int m, vector<long long int> &primes)
{
    vector<pair<long long int, long long int>> factors;
    factors.clear();
    long long int i = 0;
    long long int p = primes[0];
    long long int count = 0;
    while (p * p <= m)
    {
        if (m % p == 0)
        {
            count = 0;
            while (m % p == 0)
            {
                count++;
                m = m / p;
            }
            factors.push_back(make_pair(p, count));
        }
        i++;
        p = primes[i];
    }
    if (m != 1)
    {
        factors.push_back(make_pair(m, 1));
    }
    return factors;
}

int main()
{
    int t;
    cin >> t;
    long long int N = 1000000;
    long long int arr[N] = {0};
    vector<long long int> primes = prime_sieve(arr, 1000000);
    for (int i = 0; i < t; i++)
    {
        int m;
        cin >> m;

        vector<pair<long long int, long long int>> factors = factorize(m, primes);
        int sum = 0;

        for (auto x : factors)
        {
            if (x.second > 0)
            {
                sum++;
            }
        
        }

        if (sum >= 3)
        {
            cout << "YES" << endl;
            
                long long int a = pow(factors[0].first, factors[0].second);
                long long int b = pow(factors[1].first, factors[1].second);
                long long int c = m/(a*b);
                cout<<a<<" "<<b<<" "<<c<<endl; 
        }
        else if (sum == 1)
        {
            if (factors[0].second >= 6)
            {
                cout << "YES" << endl;
                long long int a = pow(factors[0].first, 1);
                long long int b = pow(factors[0].first, 2);
                long long int c = pow(factors[0].first, (factors[0].second) - 3);
                cout << a << " " << b << " " << c << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else if (sum == 2)
        {
            int third = (m) / (factors[0].first * factors[1].first);
            if (third != factors[0].first && third != factors[1].first && third >= 2)
            {
                cout << "YES" << endl;
                cout << factors[0].first << " " << factors[1].first << " " << third << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
        sum = 0;
    }
    return 0;
}