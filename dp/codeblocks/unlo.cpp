//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int knapSack(int n, int W, int val[], int wt[])
    {
               int dp[n+1][W+1];
       for(int i=0;i<=n;i++){
           for(int j=0;j<=W;j++){
               dp[i][j]=0;
           }
       }
        dp[0][0]=0;
       for(int i=1;i<=n;i++){
           for(int j=0;j<=W;j++){
               if(j>=wt[i-1]){
                   dp[i][j]=max(dp[i-1][j],val[i-1]+dp[i][j-wt[i-1]]);
               }
               else{
                   dp[i][j]=dp[i-1][j];
               }
               
           }
       }
       return dp[n][W];
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, W;
        cin>>N>>W;
        int val[N], wt[N];
        for(int i = 0;i < N;i++)
            cin>>val[i];
        for(int i = 0;i < N;i++)
            cin>>wt[i];
        
        Solution ob;
        cout<<ob.knapSack(N, W, val, wt)<<endl;
    }
    return 0;
}
// } Driver Code Ends