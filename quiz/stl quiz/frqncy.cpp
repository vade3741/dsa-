#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
vector<int >v;
for(int i=0;i<n;i++){
    int t;
    cin>>t;
    v.push_back(t);
}set<int>s;
for(int i=0;i<n;i++){
    s.insert(v[i]);
}for(auto x:s){
auto lb =lower_bound(v.begin(),v.end(),x);
auto lb1 =upper_bound(v.begin(),v.end(),x);

cout<<lb1-lb<<endl;
}
return 0;
}