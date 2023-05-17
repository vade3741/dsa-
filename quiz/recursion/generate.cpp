#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void gemeratestring(string &s,int open,int close,int n,vector<string>& ans){
    if(open == n &&close ==n){
        ans.push_back(s);
        return;
    }
    if(close<open){
        s.append(")");
        gemeratestring(s,open,close+1,n,ans);
        s.pop_back();

        }
    if(open<n){
        s.append("(");
        gemeratestring(s,open+1,close,n,ans);
        s.pop_back();
    }
    
        
    
}
int main()
{
    int n;
    cin>>n;
    string s="";
    vector<string> ans;
    gemeratestring(s,0,0,n,ans);
    
    for(auto s: ans){
        cout<<s<<endl;
    }
      return 0;
}