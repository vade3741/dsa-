#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void buildTree(int *a, int s, int e, int *tree, int index)
{
    if (s == e)
    {
        tree[index] = a[s];
        return;
    }
    // Recursive case
    int mid = (s + e) / 2;
    buildTree(a, s, mid, tree, 2 * index);
    buildTree(a, mid + 1, e, tree, 2 * index + 1);
    tree[index] = min(tree[2 * index], tree[2 * index + 1]);
    return;
}
int query(int *tree, int ss, int se, int qs, int qe, int index)
{
    // complete overlap
    if (qs <= ss && qe >= se)
    {
        return tree[index];
    }
    // no overlap
    if (qs > se || ss > qe)
    {
        return INT_MAX;
    }
    // partial overlap
    int mid = (ss + se) / 2;
    int left = query(tree, ss, mid, qs, qe, 2 * index);
    int right = query(tree, mid + 1, se, qs, qe, 2 * index + 1);
    return min(left, right);
}
void updateNode(int *tree, int ss, int se, int i, int increment, int index)
{
    // case where i is out of bounds
    if (i > se || i < ss)
    {
        return;
    }
    // leaf node
    if (ss == se)
    {
        tree[index] += increment;
        return;
    }
    int mid = (ss + se) / 2;
    updateNode(tree, ss, mid, i, increment, 2 * index);
    updateNode(tree, mid + 1, se, i, increment, 2 * index + 1);
    tree[index] = min(tree[2 * index], tree[2 * index + 1]);
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int *tree = new int[4 * n + 1];
    buildTree(arr, 0, n - 1, tree, 1);
    updateNode(tree, 0, n - 1, 3, +10, 1);
    // update(tree,0,n-1,2,10,1);
    // lets the print the tree array
    int q;
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        cout << query(tree, 0, n - 1, l, r, 1) << endl;
    }

    return 0;
}