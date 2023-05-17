#include<bits/stdc++.h>
#include<iostream>
#define int long long int
using namespace std;
int32_t main()
{
int t;
cin>>t;
while(t--)
{
int n;
cin>>n;
vector<int>v;
for(int i=0;i<n;i++)
{
int temp;
cin>>temp;
v.push_back(temp);
}
int sum=0;
for(int i=0;i<v.size();i++){
    sum+=v[i];
}
 int j=INT_MAX;;
        for(int i=0;i<n;i++){
            if(sum<=n*v[i]){
                j=min(j,v[i]);
            }
        }
        cout<<j<<" ";
}
return 0 ;
}