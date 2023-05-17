#include <iostream>
#include <bits/stdc++.h>
#include<string>
using namespace std;
#define int long long int
string xoring(string a, string b, int n)
{
    string ans = "";

    for (int i = 0; i < n; i++)
    {

        if (a[i] == b[i])
        {
            ans += "0";
        }

        else
        {
            ans += "1";
        }
    }
    return ans;
}
int32_t main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        
    
        string s1;
        cin >> s1;
        string s2;
        cin>>s2;
        int y = 0;
     

        string c = xoring(s1, s2, s1.length());
        cout<<c<<endl;
    }

}