#include <bits/stdc++.h>
#include <iostream>
#define int long long int
using namespace std;
int lazy[1000]={0};
void build(vector<int> &v, int *tree, int start, int end, int index)
{
    if (start == end)
    {
        tree[index] = v[start];
        return;
    }
    int mid = (start + end) / 2;
    build(v, tree, start, mid, 2 * index);
    build(v, tree, mid + 1, end, 2 * index + 1);
    tree[index] = (tree[2 * index] + tree[2 * index + 1]);
    // return;
}
int query(int *tree, int start, int end, int left, int right, int index)
{
    if (start > right || end < left)
    {
        return 0;
    }
    if (start >= left && right >= end)
    {
        return tree[index];
    }
    int mid = (start + end) / 2;
    int l = query(tree, start, mid, left, right, 2 * index+1);
    int r = query(tree, mid + 1, end, left, right, 2 * index + 2);
    return (l + r);
}
void update(int *tree, int start, int end, int increment, int index, int i)
{
    if (end < i || start > i)
    {
        return;
    }
    if (start == end)
    {
        tree[index] += increment;
        return;
    }
    int mid = (start + end) / 2;
    update(tree, start, mid, increment, 2 * index+1, i);
    update(tree, mid + 1, end, increment, 2 * index + 2, i);
    tree[index] = (tree[2 * index+1] + tree[2 * index + 2]);
    // return;
}
void rangelazy(int *tree, int start, int end, int index, int increment, int left, int right)
{
    if (lazy[index] != 0)
    {
        tree[index] += (end - start + 1) * lazy[index];
        if (start != end)
        {
            lazy[2 * index] += lazy[index];
            lazy[2 * index + 1] += lazy[index];
        }
        lazy[index] = 0;
    }
    if (start > right || end < left)
    {
        return;
    }
    if (start >= left && right >= end)
    {
        tree[index] += (end - start + 1) * increment;
        if (start != end)
        {
            lazy[2 * index] += increment;
            lazy[2 * index +1] += increment;
        }
        // lazy[index]=0;
        return;
    }
    int mid = (start + end) / 2;
    rangelazy(tree,start, mid, 2 * index, increment, left, right);
    rangelazy(tree, mid + 1, end, 2 * index + 1, increment, left, right);
    tree[index] = tree[2 * index] + tree[2 * index +1];
}
int query_tree(int *tree, int start, int end, int left, int right, int index)
{
    
    if (lazy[index] != 0)
    {
        tree[index] += (end - start + 1) * (lazy[index]);
        if (start != end)
        {
            lazy[2 * index] += lazy[index];
            lazy[2 * index + 1] += lazy[index];
        }
        lazy[index] = 0;
    }
    if (start > right || end < left) // no overlap
    {
        return 0;
    }
    if (start >= left && right >= end)
    {

        return tree[index];
    }
    int mid = (start + end) / 2;
    int l = query_tree(tree, start, mid, left, right, 2 * index);
    int r = query_tree(tree, mid + 1, end, left, right, 2 * index + 1);
    return l + r;
}
int32_t main()
{
    int t;
    cin >> t;
    while (t--)
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
        int *tree = new int[4 * n + 1];
        build(v, tree, 0, n - 1, 1);
        // update(tree, 0, n - 1, 10, 1, 1);
        //vector<int> lazy(4 * n + 1, 0);
        int l, r;
        cin >> l >> r;
        rangelazy(tree, 0, n - 1, 1, 10, l, r);
        
        int q;
        cin >> q;
        while (q--)
        {
        int l, r;
        cin >> l >> r;
        cout<<query_tree(tree, 0, n - 1, l, r, 1)<<" ";
        // for(int i=1;i<=13;i++)
        // {
        //     cout<<tree[i]<<" ";
        // }
        }
    }
    return 0;
}