#include <iostream>
#include <bits/stdc++.h>
using namespace std;
const int n = 1000006;
int arr[1000006] = {0};
vector<int> primes;
vector<pair<int, int>> factors;
void prime_sieve()
{
    for (int i = 3; i <= n; i += 2)
    {
        arr[i] = 1;
    }
    primes.push_back(2);

    for (int i = 3; i <= n; i += 2)
    {
        if (arr[i] == 1)
        {
            primes.push_back(i);
            for (int j = 2 * i; j <= n; j += i)
            {
                arr[j] = 0;
            }
        }
    }
}
void factorize(int m)
{

    int i = 0;
    int p = primes[0];
    while (p * p <= m)
    {
        if (m % p == 0)
        {
            int count = 0;

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
}

int main()
{
    int m;
    cin >> m;
    prime_sieve();
    factorize(m);
    for (auto x : factors)
    {
        cout << x.first << " " << x.second << endl;
    }
    return 0;
}