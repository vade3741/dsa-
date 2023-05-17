#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void permutestring(string s,int i,set<string> &ans,string g){
if(s[i]=='\0'){
    if(s.compare(g)>0){
    ans.insert(s);
    }

    return;
}
for(int k=i;k<s.length();k++){
    swap(s[i],s[k]);
    permutestring(s,i+1,ans,g);
    swap(s[k],s[i]);

}
}
int main()
{
    string s;
    cin>>s;

// sort(s.begin(),s.end());
set<string> ans;
    permutestring(s,0,ans,s);
for(auto x: ans){
    cout<<x<<endl;
}
      return 0;
}