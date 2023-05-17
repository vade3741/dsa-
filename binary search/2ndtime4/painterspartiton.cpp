#include <iostream>
#include <bits/stdc++.h>
#define int long long int
using namespace std;

bool maxbooks(vector<int> &v, int max_pages, int k)
{
      int sum = 0;
      int count = 1;
      for (int i = 0; i < v.size(); i++)
      {
            if (v[i] > max_pages)
            {
                  return false;
            }
            if (sum + v[i] > max_pages)
            {
                  count++;
                  sum = v[i];
                  if (count > k)
                  {
                        return false;
                  }
            }
            else
            {
                  sum += v[i];
            }
      }
      return true;
}

int binary_search(vector<int> &v, int l, int r, int k)
{
      int ans = INT_MAX;
      while (r >= l)
      {
            int mid = l + (r - l) / 2;
            if (maxbooks(v, mid, k))
            {
                  ans = mid;
                  r = mid - 1;
            }
            else
            {
                  l = mid + 1;
            }
      }
      return ans;
}
int32_t main()
{
      int t;
      cin >> t;
      while (t--)
      {
            int n, k;
            cin >> n >> k;
            int sum = 0;
            vector<int> v;
            for (int i = 0; i < n; i++)
            {
                  int temp;
                  cin >> temp;
                  v.push_back(temp);
                  sum += v[i];
            }
            cout << binary_search(v, v[0], sum, k) << endl;
      }

      return 0;
}