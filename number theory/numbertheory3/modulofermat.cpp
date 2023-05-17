#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int binExpIter(int a, int b, int M)
{
    int ans = 1;
    while (b > 0)
    {
        if (b & 1)
        {
            ans = (ans * 1ll * a) % M;
        }
        b = b >> 1;
        a = (a * 1ll * a) % M;
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    int l;
    cin >> l;
    int count = 0;
    int f = 0;
    
    for (int a = (1); a < (l); a++)
    {
        f = 0;
        for (int i = 1; i < n; i++)
        {
            for (int j = 1; j < n; j++)
            {
                for (int z = 1; z < n; z++)
                { 
                    if (binExpIter(i, (a%(n-1)), n) + binExpIter(j, a, n) == binExpIter(z, a, n))
                    {
                        f = 1;
                    }
                }
            }
        }
            if (f == 1)
            {
                count++;
            }
        
    }
        cout << count << " ";
    return 0;
}