#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;

bool comp(string a,string b){
    if(a.size()<=b.size()&&b.substr(0,a.size())==a){
        return false;
    }
    else if(b.size()<=a.size()&&a.substr(0,b.size())==b){
        return true;
    }else{
        return a<b;
    }
}

int main()
{

    int n;
    cin>>n;
    string s[n];
    for(int i=0;i<n;i++){
        cin>>s[i];
       
    }
sort(s,s+n,comp);
         for(int i=0;i<n;i++){
        cout<<s[i];
       
    }
  
   
      return 0;
}