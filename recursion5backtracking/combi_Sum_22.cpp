#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void combinational_sum(vector<vector<int>> &ans, int index, vector<int> &v, vector<int> arr, int sum)
{

    
        if (sum == 0)
        {

            ans.push_back(v);
        return;
        }
    

    for (int i = index; i < arr.size(); i++)
    {
        if (i > index && arr[i] == arr[i - 1])
        {
            continue;
        }
        if (sum < arr[i])
        {
            break;
        }
        v.push_back(arr[i]);

        combinational_sum(ans, i + 1, v, arr, sum - arr[i]);
        v.pop_back();
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }
    sort(arr.begin(), arr.end());
    vector<int> v;
    vector<vector<int>> ans;
    int sum;
    cin >> sum;
    combinational_sum(ans, 0, v, arr, sum);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}