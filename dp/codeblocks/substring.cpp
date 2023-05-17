#include<bits/stdc++.h>
#include<iostream>
#define int long long int
using namespace std;
int maximumCostSubstring(string s,string chars,vector<int> &vals){
unordered_map<char,int> m;
int n=s.length();
int cur_sum=0;
int overall_sum=0;

for(int i=0;i<chars.size();i++){
    m[chars[i]]=i;
}

for(int i=0;i<n;i++){
if(m.find(s[i])!=m.end()){
cur_sum+=vals[m[s[i]]];
}
else{
    cur_sum+=s[i]-'a'+1;
}  
if(cur_sum<0){
    cur_sum=0;
}

overall_sum=max(overall_sum,cur_sum);
}
return overall_sum;

}
int32_t main()
{
int t;
cin>>t;
while(t--)
{
int n;
cin>>n;
string s;
cin>>s;
string chars;
cin>>chars;
vector<int>v;
for(int i=0;i<n;i++)
{
int temp;
cin>>temp;
v.push_back(temp);
}
cout<<maximumCostSubstring(s,chars,v);
}
return 0 ;
}