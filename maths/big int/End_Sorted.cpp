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
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            v.push_back(temp);
        }
        int smallest = 0;
        int largest = 0;
        for (int i = 1; i < n; i++)
        {
            if (v[smallest] > v[i])
            {
                smallest = i;
            }
            if (v[largest] < v[i])
            {
                largest = i;
            }
        }
        
        if(largest>smallest) {
            cout<<(n-largest-1)+smallest<<endl;
        } else {
            cout<<(n-largest-1)+smallest-1<<endl;
        }
    }
    return 0;
}