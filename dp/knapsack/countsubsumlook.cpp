#include<bits/stdc++.h>
#include<iostream>
#define int long long int
using namespace std;
int subsetsum(vector<int> &v,vector<int> temp,int target,int i){
 int t[v.size()+1][target+1];
 for(int i=0;i<=target;i++){
    t[0][i]=0;
 }
 for(int j=0;j<=v.size();j++){
    t[j][0]=1;
 }
 for(int i=1;i<=v.size();i++){
    for(int j=1;j<=target;j++){
  if(v[i-1]<=j){
       t[i][j]=t[i-1][j-v[i-1]]+t[i-1][j];
  }
  else{
    t[i][j]=t[i-1][j];
  }



    }
 }
//   for(int i=0;i<=v.size();i++){
//     for(int j=0;j<=target;j++){
// cout<<t[i][j]<<" ";
//     }
//     cout<<endl;
//  }
return t[v.size()][target];
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
for(int i=0;i<n;i++)
{
int temp;
cin>>temp;
v.push_back(temp);
}
vector<int> temp;
int target;
cin>>target;
cout<<subsetsum(v,temp,target,0)<<endl;
}
return 0 ;
}