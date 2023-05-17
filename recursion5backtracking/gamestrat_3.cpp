#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int maxcoins(vector<long long int> &v,int i,int j,vector<long long int> &dp){

if(i>j){
    return 0;
}if(i==j){
    return v[i];
}

	if (dp[i][j] != -1) {
		return dp[i][j];
	}
int op1=v[i]+min(maxcoins(v,i+2,j),maxcoins(v,i+1,j-1));
int op2=v[j]+min(maxcoins(v,i,j-2),maxcoins(v,i+1,j-1));

return dp[i][j]=max(op1,op2);
}
int main()
{
    int n;
    cin>>n;
    vector<long long int> v;
    vector<long long int> dp;

    memset(dp, -1, sizeof(dp));
    for(int i=0;i<n;i++){
        long long int temp;
        cin>>temp;
        v.push_back(temp);
}
cout<<maxcoins(v,0,n-1,dp)<<endl;
      return 0;
}