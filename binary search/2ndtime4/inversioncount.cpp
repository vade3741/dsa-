#include <bits/stdc++.h>
#include <iostream>
#define int long long int
using namespace std;
int merge(int *v, int left, int right)
{
    int temp[100000]={0};
    

    int mid = (left + right) / 2;
    int left_pointer = left;
    int right_pointer = mid + 1;
    int k = left;
    int count = 0;
    while (left_pointer <= mid && right_pointer <= right)
    {
        if (v[left_pointer] <= v[right_pointer])
        {
            temp[k] = v[left_pointer];
            k++;
            left_pointer++;
        }
        else
        {   

            temp[k] = v[right_pointer];
            k++;
            right_pointer++;
            count += (mid - left_pointer + 1);
        }
    }
    while (left_pointer <= mid)
    {
        temp[k] = v[left_pointer];
        k++;
        left_pointer++;
    }
    while (right_pointer <= right)
    {
        temp[k] = v[right_pointer];
        k++;
        right_pointer++;
    }
    for (int i = left; i <= right; i++)
    {
        v[i] = temp[i];
    }
    return count;
}
int inversion_count(int *v, int left, int right)
{

    if (left >= right)
    {
        return 0;
    }
    int mid = (left + right) / 2;
    int x = inversion_count(v, left, mid);
    
    int y = inversion_count(v, mid + 1, right);

    int z = merge(v, left, right);
    return x + y + z;
}
int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int v[100000];
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int u = inversion_count(v, 0, n - 1);
        cout << u << endl;
    }
    return 0;
}