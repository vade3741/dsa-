//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    int helper(int w,int *v1,int *v,int n,int ** dp){
               if(n==0||w==0){
return 0;
}
if(dp[n-1][w]!=-1){
    return dp[n-1][w];
}
if(w>=v1[n-1]){
return dp[n-1][w]=max(v[n-1]+helper(w-v1[n-1],v1,v,n-1,dp),helper(w,v1,v,n-1,dp));
}
else{
return helper(w,v1,v,n-1,dp);
}
    }
    int knapSack(int w, int v1[], int v[], int n) 
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

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}
// } Driver Code Ends