#include<bits/stdc++.h>
#include<iostream>
#define int long long int
using namespace std;
int solve(int n,int e){
    if(n==1||e==1)
    {
        return n;
    }
    int ans=INT_MAX;
    for(int k=1;k<n;k++){
        ans=min(ans,1+max(solve(k-1,e-1),solve(n-k,e)));
    }
return ans;
}
int32_t main()
{
int t;
cin>>t;
while(t--)
{
int n,e;
cin>>n>>e;
cout<<solve(n,e);


}
return 0 ;
}