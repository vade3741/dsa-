class Solution {
public:
int mincoin(vector<int> &v,int amount,int *dp){
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
    int coinChange(vector<int>& coins, int amount) {
        int dp[100000];
        memset(dp,0,sizeof(dp));
       int ans= mincoin(coins,amount,dp);
          if(ans==INT_MAX){
        return -1;
       }
       else{
        return ans;
             }  
    }
};