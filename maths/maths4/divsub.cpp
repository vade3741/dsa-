#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long 
ll a[1000005], fre[1000005];
int32_t main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
    int n;
        cin >> n;
        memset(fre,0,sizeof(fre));
        fre[0] = 1;
        int sum = 0;
string s;
cin>>s;
        for (int i = 0; i < n; i++)
        {
            a[i]=s[i];
            sum += a[i];
            sum%=n;
            sum = (sum + n) % n;
            fre[sum]++;
        }
        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            ll m = fre[i];
            ans += (m)* (m - 1) / 2;
        }
        cout << ans << endl;
    }
    return 0;
}