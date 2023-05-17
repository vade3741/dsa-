#include <bits/stdc++.h>
#include <iostream>
#define int long long int
using namespace std;
int mincoin(vector<int> &v, int amount,int *dp)
{
    if(amount==0){
    return 0;

}
int mini=INT_MAX;
if(dp[amount]!=0){
    return dp[amount];
}
for(int i=0;i<v.size();i++){
if(amount-v[i]>=0){

mini=min(mini+0ll,mincoin(v,amount-v[i],dp)+1ll);
}
}


return dp[amount]= mini;
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
        int amount;
        cin >> amount;
        int dp[100000] = {0};
         memset(dp,0,sizeof(dp));
       int ans=mincoin(v, amount,dp);
       if(ans==INT_MAX){
        cout<<"-1"<<endl;
       }
       else{
        cout<<ans<<endl;
       }
    }
    return 0;
}