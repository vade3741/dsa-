#include<bits/stdc++.h>
#include<iostream>
#define int long long int
using namespace std;
bool compare(pair<int,int>p1,pair<int,int>p2){
    return p1.second<p2.second;
}
int32_t main()
{
int t;
cin>>t;
while(t--){
  int n;
  cin>>n;
  vector<pair<int,int>> v;
  for(int i=0;i<n;i++){

  
    int p,q;
    cin>>p>>q;
    v.push_back(make_pair(p,q));
  }  
  sort(v.begin(),v.end(),compare);
int res=1;
int fin=v[0].second;
for(int i=0;i<n;i++){
    if(v[i].first>=fin){
        fin=v[i].second;
        res++;
    }
}
cout<<res<<endl;
}
return 0 ;
}