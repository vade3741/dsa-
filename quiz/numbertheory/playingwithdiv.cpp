#include<iostream>
#include<bits/stdc++.h>
using namespace std;
const long long int  mod =1000000000+7;
#define int long long int
int32_t main()
{
    int n;
    cin>>n;
    vector<int> v;
    int mul=1;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        v.push_back(temp);
        mul*=(v[i]+1)%mod;
    }
    int ans=1;
    for(int i=0;i<n;i++){
        ans=(ans*((v[i])*(mul/2)+1)%mod)%mod;
        
    }cout<<ans<<endl;

      return 0;
}