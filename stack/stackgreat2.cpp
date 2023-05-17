#include <bits/stdc++.h>
using namespace std;
void display(vector<int>a) {
  for (int i = 0; i < a.size(); i++)
  {
    cout << a[i] << endl;
  }
}
vector<int> solve(vector<int>arr)
{
    int n=arr.size();
    stack<int> s;
    
   vector<int> temp(n);
        s.push(arr[n - 1]);
        temp[n - 1] = -1;
        for (int i = n - 2; i >= 0; i--)
        {

            while (!s.empty() && arr[i] >= s.top())
            {

                s.pop();
            }
            if (s.empty())
            {
                temp[i] = -1;
            }
            else
            {
                temp[i] = s.top();
            }

            s.push(arr[i]);
        }
        return temp;
}
int main(int argc, char** argv)
{
  int n;
  cin >> n;
  vector<int>arr(n, 0);
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  vector<int>nge(n, 0);
  nge = solve(arr);
  display(nge);
  return 0;
}