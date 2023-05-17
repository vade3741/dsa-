#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bitset<10000000> b;


#define int long long int
void isbitseieve()
{
    b.set();
    b[0] = b[1] = 0;
    for (int i = 2; i <= 10000000; i++)
    {
        if (b[i] == 1)
        {

            for (int j = 2 * i; j <= 10000000; j += i)
            {
                b[j] = 0;
            }
        }
    }
}
int32_t main()
{
    isbitseieve();
    int t;
    cin >> t;
    for (int k = 0; k < t; k++)
    {
       
        int a;
        cin >> a;
    int tot[a+1];
     for (int i = 1; i <= a; i++)
        {
            tot[i] = i;
        }

        for (int i = 2; i <= a; i++)
        {
            if (b[i] == 1)
            {
                if ((a % i) == 0)
                {
                    for (int j = i; j <= a; j += i)
                    {
                        tot[j] *= (i - 1);
                        tot[j] = tot[j] / i;
                    }
                }
            }
        }
        cout << tot[a] << endl;
    }
    return 0;
}