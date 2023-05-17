#include<bits/stdc++.h>
#include<iostream>
#define int long long int
using namespace std;
string removeduplicates(string &s){
    string c="";
    for(int i=0;i<s.size();i++){
         if(c.find(s[i])!= string::npos){
              c.erase(c.find(s[i]));
              c+=s[i];
         }
         else{
            c+=s[i];
         }
    }
    return c;
}
int32_t main()
{
string s;
cin>>s;
cout<<removeduplicates(s)<<endl;
return 0 ;
}