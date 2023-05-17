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
vector<int> temp;
for(int i=0;i<n;i++)
{
int temp;
cin>>temp;
v.push_back(temp);
}
int sum=0;
for(int i=0;i<n;i++){
    sum+=v[i];
    temp.push_back(sum);
}
for(auto x:temp){
    cout<<x<<" ";
}
for(int i=1;i<=n;i++){
    if(temp[n-1]-temp[i]==temp[i-1]){
        cout<<i+1<<" ";
    }
}
cout<<"-1"<<" ";

}
return 0 ;
}