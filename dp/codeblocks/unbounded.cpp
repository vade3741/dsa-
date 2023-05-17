//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
   int helper(int w,int *v1,int *v,int n,int ** dp){
               if(n==0||w==0){
return 0;
}
if(dp[n-1][w]!=-1){
    return dp[n-1][w];
}
if(w>=v1[n-1]){
return dp[n-1][w]=max(v[n-1]+helper(w-v1[n-1],v1,v,n,dp),helper(w,v1,v,n-1,dp));
}
else{
return helper(w,v1,v,n-1,dp);
}
    }
    int knapSack(int n, int w, int v[], int v1[])
    {
        int  **dp;
         dp = new int*[n+1];
         for (int i = 0; i < n+1; i++)
        dp[i] = new int[w + 1];
          for (int i = 0; i < n+1; i++)
        for (int j = 0; j < w + 1; j++)
            dp[i][j] = -1;
         return helper(w,v1,v,n,dp);
       
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