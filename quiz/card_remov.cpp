#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
cin>>t;
for(int i=0;i<t;i++){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        v.push_back(num);
    }
    unordered_map<int,int>m;
for(int i=0;i<n;i++){
    m[v[i]]++;
}
int max=0;
for(auto x:m){

if(x.second>max){
    max=x.second;
}
}
cout<<v.size()-max<<endl;
}
      return 0;
}