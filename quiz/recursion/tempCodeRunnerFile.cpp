#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void gemeratestring(string &s,int open,int close){
    if(open==0 && close ==0){
        cout<<s<<endl;
        return;
    }
    if(open>0){
        s.push_back('(');
        gemeratestring(s,open-1,close);
        s.pop_back();
    }
    if(close>0){
        if(close>open){
        s.push_back(')');
        gemeratestring(s,open,close-1);
        s.pop_back();

        }
    }
}
int main()
{
    int n;
    cin>>n;
    string s;
    gemeratestring(s,n,n);
      return 0;
}