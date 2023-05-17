#include <iostream>
#include <bits/stdc++.h>
using namespace std;
long long int modularexpo(long long int a, long long int b,long long int m)
{
    long long int ans;
    long long int c;
    if (b == 1)
    {
        return a;
    }
    c = modularexpo(a, b / 2,m);
    c = (c * c)%m ;
    if (b & 1)
    {
        ans = (a * c)%m;
    }
    else
    {
        ans = c;
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    long long int m = 1000000007;
    long long int a = modularexpo(n, m - 2,m);
    cout << a << endl;
    return 0;
}