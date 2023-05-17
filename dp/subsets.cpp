#include<bits/stdc++.h>
#include<iostream>
#define int long long int
using namespace std;
void subsequences(string v,int n,int index,string temp){
if(index==n){
    for(auto x:temp){
        cout<<x<<" ";

    }
    cout<<endl;
    return;
}
temp.push_back(v[index]);
subsequences(v,n,index+1,temp);
temp.pop_back();
subsequences(v,n,index+1,temp);
}
int32_t main()
{
int t;
cin>>t;
while(t--)
{

vector<int>v;
// for(int i=0;i<n;i++)
// {
// int temp;
// cin>>temp;
// v.push_back(temp);
// }
string s;
cin>>s;

string temp;
subsequences(s,s.size(),0,temp);
}
return 0 ;
}