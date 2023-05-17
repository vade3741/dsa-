#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
        map<int,set<string>,greater<>> m;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        int count;
        cin>>count;
        m[count].insert(s);
        
        
    }for(auto x:m){
        
        cout<<x.second<<" "<<x.first<<endl;
  
    }
      return 0;
}