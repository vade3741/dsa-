#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int pp(int n){
    	for(int i=2;i*i<=n;++i)	{
    		if(n%i == 0){
    			return 0;
    		}
    	}
    	return 1;
    }
int main()
{
    int dp[505] = {0};
dp[1] = 0;
int count=0;
    for(int i=2;i<505;++i){
    		if(pp(i)==1){
                count++;
            }
    		long long value = 1ll<<(count-1);
    		dp[i] = dp[i-1] + value;
    	}
    int a;
    cin>>a;
    cout<<dp[a]<<endl;
      return 0;
}