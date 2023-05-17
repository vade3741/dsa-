#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void numberstrings(string s){
       int count=0;
    for(int i=0;i<=s.size()/2;i++){
        if(s[i]!=s[s.size()-i-1]){
            count=count+2;
        }

    }
    
    
    cout<<count<<endl;
}
int main()
{
    string s;
    cin>>s;
    numberstrings(s);

      return 0;
}