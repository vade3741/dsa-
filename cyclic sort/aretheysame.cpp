#include <bits/stdc++.h>
#include <iostream>
#define int long long int
using namespace std;
bool equivalentstring(string a, string b)
{
    string c = b;
    if (a == b)
    {
        return true;
    }
    if (a.size()!= b.size())
    {
        return false;
    }
    if(a.size()%2!=0 || b.size()%2!=0){
        return false;
    }

    if (equivalentstring(a.substr(0, (a.size()) / 2), b.substr(0, (b.size()) / 2)) == true && equivalentstring(a.substr((a.size()) / 2, a.size()), b.substr((b.size()) / 2, b.size())) == true)
    {
        return true;
    }
    if (equivalentstring(a.substr(0, (a.size()) / 2), b.substr((b.size()) / 2, b.size())) == true && equivalentstring(a.substr((a.size()) / 2, a.size()), b.substr(0, (b.size()) / 2)) == true)
    {
        return true;
    }

    return false;
}
int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        if (equivalentstring(a, b))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}