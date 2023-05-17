#include <iostream>
#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        v.push_back(num);
    }
    int start = 0;
    int end = v.size() - 1;
    while (start < end)
    {
        //case to check if array get rotated or not
        if(v[end]>=v[start]){
            return v[start];
        }
        int mid = start - (start - end) / 2;
       if (end < start)
        return -1;
    if (end == start)
        return start;
        if (v[mid] >=v[0])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
    }
    cout << v[start];

    return 0;
}