#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define M 10000007
int binExpIter(long long int a, long long int b)
{
    a=a%M;

    long long int ans = 1;
    while (b > 0)
    {
        if (b & 1)
        {
            ans = (ans * a) % M;
        }
        a = (a * a) % M;
        b = b >> 1;
    }
    return ans;
}
int main()
{

    long long int n, k;
    cin >> n;
    cin >> k;

    if (n == 0 && k == 0)
    {
        return 0;
    }

    long long res=(binExpIter(n, k) + binExpIter(n, n) + (2 * binExpIter(n - 1, k)) % M + (2 * binExpIter(n - 1, n - 1)) % M) % M ;
    cout<<res<<endl;

    return 0;
}