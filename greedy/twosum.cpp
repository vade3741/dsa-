#include <bits/stdc++.h>
#include <iostream>
#define int long long int
using namespace std;
vector<int> twosum(vector<int> &nums, int target)
{
    vector<int> temp = nums;
    vector<int> sum;
    sort(nums.begin(), nums.end());
    int i = 0;
    int j = nums.size() - 1;
    while (i<j)
     
    {
     if(nums[i] + nums[j] == target)
        {
            if(nums[i]!=nums[j]){
            int a = find(temp.begin(), temp.end(), nums[i]) - temp.begin();
            // cout<<a<<" ";
            sum.push_back(a);

            int b = find(temp.begin(), temp.end(), nums[j]) - temp.begin();
            sum.push_back(b);
            }
            else{
                  int a = find(temp.begin(), temp.end(), nums[i]) - temp.begin();
            // cout<<a<<" ";
            sum.push_back(a); 
            int b = find(temp.begin()+a+1, temp.end(), nums[i]) - temp.begin();

            sum.push_back(b); 
            }
        }
        if (nums[i] + nums[j] < target)
        {
            i++;
        }
        else
        {
            j--;
        }
    }


    return sum;
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
        int target;
        cin >> target;
        vector<int> k = twosum(v, target);
        for (auto x : k)
        {
            cout << x << endl;
        }
    }
    return 0;
}