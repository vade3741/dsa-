//{ Driver Code Starts
// Initial Template for c++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
bool ispalindrome(string &x,int i,int j){
    
    while(i<j){
             if(x[i]!=x[j]){
               return false;
             }
            i++;
            j--;
    }
   return true;
}
int palindrome(string &c,int i,int j,int **dp){
if(i>=j){
    return 0;
}
if(dp[i][j]!=0){
        return dp[i][j];
    }
  if(ispalindrome(c,i,j)==true){
        return 0;
    }
    
int ans=INT_MAX;
for(int k=i;k<j;k++){
  
    

    ans=min(ans,palindrome(c,i,k,dp)+palindrome(c,k+1,j,dp)+1);
    
}
return dp[i][j]=ans;
}
    int palindromicPartition(string str)
    {
        int n=str.length();
        int  **dp;
         dp = new int*[n+1];
         for (int i = 0; i < n+1; i++)
        dp[i] = new int[n + 1];
          for (int i = 0; i <n+1; i++)
        for (int j = 0; j < n+ 1; j++)
            dp[i][j] = 0;
       int c= palindrome(str,0,n-1,dp);
       return c;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        
        Solution ob;
        cout<<ob.palindromicPartition(str)<<"\n";
    }
    return 0;
}
// } Driver Code Ends