#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main()
{
    int x, y;
    cin >> x;
    cin >> y;
    string s = "";
    int i=0;
    int mask;
    for (i = 63; i >= 0; i--)
    {
         mask =( 1 << i);
        
        if ((x & mask) == (y & mask))
        {
            s += "0";
           // cout<<s;
        }
        else
        {
            break;
        }
    }
    for (int j = i ; j >= 0; j--)
    {
        s += "1";
        
    }
    // cout << s << endl;
     cout<<stoi(s,0,2)<<endl;
    return 0;
}