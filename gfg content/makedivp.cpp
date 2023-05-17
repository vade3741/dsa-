#include <iostream>
#include <bits/stdc++.h>
#define int long long int
using namespace std;
    int minSubarray(vector<int>& nums, int p) {
                // nums.insert(nums.begin(),0);
    vector<int> cumm_sum;
    int sum = 0;

    cumm_sum.push_back(0);
     for(int i=0;i<nums.size();i++){
        sum += nums[i];
        cumm_sum.push_back(sum);
             
     }
 int w = (sum % p);
    int k = 0;
    int j = 0;
    int small = INT_MAX;
    if (w == 0)
    {
        return 0;
    }
    
        while (k <= nums.size())
        {
            if (j <= nums.size())
            {
                j++;
                if (j != nums.size() + 1)
                {

                    if ((cumm_sum[j] - cumm_sum[k]) == w)
                    {

                        if (small > (j - k))
                        {
                            small = j - k;
                        }
                    }
                }
            }
            else
            {
                k++;
                j = k;
            }
        
        
        
    
    }
            return small;
    }
int32_t main()
{
    int n;
    cin >> n;
    vector<int> v;

    
    for (int i = 1; i <= n; i++)
    {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    int p;
    cin >> p;
   int c=minSubarray(v,p);
   cout<<c<<endl;
    // cout<<j<<" "<<k<<endl;
    return 0;
}