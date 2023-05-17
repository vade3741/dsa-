#include<bits/stdc++.h>
#include<iostream>
#define int long long int
using namespace std;
const int mod =1000000007;
int countsubsum(vector<int> &v,int s1){
int t[v.size()+1][s1+1];
for(int j=0;j<=s1;j++){
    t[0][j]=0;
}
for(int i=0;i<=v.size();i++){
    t[i][0]=1;
}
for(int i=1;i<=v.size();i++){
    for(int j=1;j<=s1;j++){
        if(v[i-1]<=j){
            t[i][j]=((t[i-1][j-v[i-1]]%mod)+(t[i-1][j]%mod)%mod);
        }
        else{
            t[i][j]=(t[i-1][j]%mod);
        }
    }
}
return t[v.size()][s1];

}
int32_t main()
{
int t;
cin>>t;
while(t--)
{
int n;
cin>>n;
int target;
cin>>target;
vector<int>v;
int sum=0;
for(int i=0;i<n;i++)
{
int temp;
cin>>temp;
v.push_back(temp);
sum+=v[i];
}
sum=sum%mod;
cout<<countsubsum(v,((sum-target)/2))<<endl;
}
return 0 ;
}