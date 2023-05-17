#include <iostream>
class Solution
{
public:
    // Function to check if given number n is a power of two.
    bool isPowerofTwo(long long n)
    {
        int j = 0;
        while(n>0)
        {
            if ((n & 1))
            {
                j++;
            }
             n=(n>>1);

           
        }
        if (j == 1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        long long n;
        cin >> n;
        Solution ob;
        if (ob.isPowerofTwo(n))
            cout << "YES" << endl;
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}