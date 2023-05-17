#include<bits/stdc++.h>
#include<iostream>
#define int long long int
using namespace std;
void countsubsum(vector<int> &v,int s1,vector<int> &temp){
int t[v.size()+1][s1+1];
for(int j=0;j<=s1;j++){
    t[0][j]=false;
}
for(int i=0;i<=v.size();i++){
    t[i][0]=true;
}
for(int i=1;i<=v.size();i++){
    for(int j=1;j<=s1;j++){
        if(v[i-1]<=j){
            t[i][j]=t[i-1][j-v[i-1]]||t[i-1][j];
        }
        else{
            t[i][j]=t[i-1][j];
        }
    }
}

for(int i=0;i<=s1;i++){
    if(t[v.size()][i]==true){
        temp.push_back(i);
    }
}

}
int32_t main()
{
int t;
cin>>t;
while(t--)
{
int n;
cin>>n;
vector<int>v;
int sum=0;
for(int i=0;i<n;i++)
{
int temp;
cin>>temp;
v.push_back(temp);
sum+=abs(v[i]);
}
cout<<sum<<" ";
vector<int> temp;
int ans=INT_MAX;
countsubsum(v,sum,temp);
for(auto x:temp){
    ans=min(ans,abs(sum-2*x));
}
cout<<ans<<endl;
}
return 0 ;
}