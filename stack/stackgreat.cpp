#include <bits/stdc++.h>
#include <iostream>
#define int long long int
using namespace std;
int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            v.push_back(temp);
        }
        stack<int> s;
        s.push(0);
         vector<int> temp(n);
        for (int i = 1; i < n; i++)
        {
            
            
                while (!s.empty() && v[i] >= v[s.top()])
                {
                int pos=s.top();
                    s.pop();
                temp[pos] = v[i];
                }
                 

            s.push(i);
        }
        while(!s.empty()){
            int pos=s.top();
            temp[pos]=-1;
        }
    
    }

    return 0;
}