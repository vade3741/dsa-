#include<bits/stdc++.h>
#include<iostream>
#define int long long int
using namespace std;
bool comp(pair<int,int> p1,pair<int,int>p2){
    return p1.first<p2.first;
}
bool compa(pair<int,int> p1,pair<int,int>p2){
return p1.second<p2.second;
}
int defking(vector<pair<int,int>> &v,int w,int h){
    sort(v.begin(),v.end(),comp);
 int diff=0;
    for(int i=1;i<v.size();i++){
       v[i-1].first=v[i].first-v[i-1].first-1;
    }
    
    sort(v.begin(),v.end(),compa);
    for(int i=1;i<v.size();i++){
       v[i-1].second=v[i].second-v[i-1].second-1;
    }

v.pop_back();   
    int maxi=INT_MIN;
    int maxii=INT_MIN;
    

    for(int i=0;i<v.size();i++){
                maxi=max(v[i].first,maxi);
                maxii=max(v[i].second,maxii);
    }
    return maxi*maxii;
}
int32_t main()
{
int t;
cin>>t;
while(t--){
    int w,h,n;
    cin>>w>>h>>n;
vector<pair<int,int>>v;
    int temp;
    int num;
    v.push_back(make_pair(0,0));
for(int i=0;i<n;i++){
    cin>>temp>>num;
    v.push_back(make_pair(temp,num));
}
v.push_back(make_pair(w+1,h+1));
cout<<defking(v,w,h)<<endl;
   

}
return 0 ;
}