#include <iostream>
#include<bits/stdc++.h>
using namespace std;
const int N=5000+1;
int dp[N][N];
int Lcs(string x,string y,int n,int m){
if(n==0||m==0){
    return dp[n][m]=0;
}
if(dp[n][m]!=-1){
    return dp[n][m];
}

else{
    return dp[n][m]=max((x[n-1]==y[m-1])+Lcs(x,y,n-1,m-1),max(Lcs(x,y,n,m-1),Lcs(x,y,n-1,m)));
}
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string x;
	   cin>>x;
       string c =x;
	   reverse(x.begin(),x.end());
	   
          for (int i = 0; i <n+1; i++)
        for (int j = 0; j < n + 1; j++)
            dp[i][j] = -1;
            Lcs(x,c,n,n);
               int ma=0;
        for(int i=1;i<=n;i++)
        {
            ma=max(ma,dp[i][n-i]);
        }
             
       cout<<ma<<endl;
	}
	return 0;
}
