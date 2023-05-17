#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v;
        vector<int> a;
        int temp;
        int maxi = INT_MIN;
        int maxxo = INT_MIN;
        int c = 0, d = 0;
        
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            v.push_back(temp);
            if (v[i] >= maxi)
            {
                maxi = max(maxi, v[i]);

                c=i+1;
            }
        }

        // cout << c << endl;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            a.push_back(temp);
        }
        int fre = count(v.begin(), v.end(), maxi);
        // cout<<fre<<endl;
        for(int i=0;i<n;i++){
            if(v[i]==maxi){
                if(a[i]>maxxo){

                maxxo=max(maxxo,a[i]);
                d=i+1;
                }
            }
        }
      

        if (fre > 1)
        {
            cout << d << endl;
        }
        else
        {
            cout << c << endl;
        }
    }
    return 0;
}