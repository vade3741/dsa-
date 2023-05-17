#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        vector<int> v1;
        vector<int> v2;

        for (int j = 0; j < n; j++)
        {
            int temp;
            cin >> temp;
            v1.push_back(temp);
        }
        for (int a = 0; a < n; a++)
        {
            int num;
            cin >> num;
            v2.push_back(num);
        }
        int count = 0;
        int key = 0;
        for (int k = 0; k < n; k++)
        {
            if ((v1[i] == 0) || (v2[i] == 0))
            {
                if (count > key)
                {
                    key = count;
                    // cout<<key<<endl;
                }
                count = 0;
            }
            else
            {
                count++;
            }
            // cout << count << " " << key << endl;
        }
        if (count > key)
        {
            key = count;
        }
        cout << key << endl;
    }
    return 0;
}