#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int a[1000000];
int tree[2000000];
#define int long long int
void buildTree(int s, int e, int index)
{
    if (s == e)
    {
        tree[index] = a[s];
        return;
    }
    // Recursive case
    int mid = (s + e) / 2;
    buildTree(s, mid, 2 * index);
    buildTree(mid + 1, e, 2 * index + 1);
    int times = log2(e - s + 1);
    if (times & 1)
    {
        tree[index] = (tree[2 * index] | tree[2 * index + 1]);
    }
    else
    {
        tree[index] = (tree[2 * index] ^ tree[2 * index + 1]);
    }
    
}
void updateNode(int ss, int se, int i, int increment, int index)
{
    // case where i is out of bounds
    if (i > se || i < ss)
    {
        return;
    }
    // leaf node
    if (ss == se)
    {
        tree[index] = increment;
    }
    else{
    int mid = (ss + se) / 2;
    updateNode(ss, mid, i, increment, 2 * index);
    updateNode(mid + 1, se, i, increment, 2 * index + 1);
    int times = log2(se - ss + 1);
    if (times & 1)
    {
        tree[index] = (tree[2 * index] | tree[2 * index + 1]);
    }
    else
    {
        tree[index] = (tree[2 * index] ^ tree[2 * index + 1]);
    }
    }
}
int32_t main()
{
    int n;
    cin >> n;
    n = pow(2, n);
    int q;
    cin >> q;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    buildTree(0, n - 1, 1);

    while (q--)
    {
        int id, val;
        cin >> id >> val;
        id--;
        updateNode(0, n - 1, id, val, 1);
        cout << tree[1] << endl;
    }

    return 0;
}