#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        vector<int> v;
         int j = 0;
         map<int,int> m;
        for(int k=0;k<n;k++){
            int temp;
            cin>>temp;
            v.push_back(temp);
        
        }
        for(int a=0;a<v.size();a++){
            m[v[a]]++;
        }
        int flag=0;
        for(auto &x:m){
            
        if((x.second%2)!=0){
            flag=1;
        }
        
        }   
        if(flag==1){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }

      return 0;
}