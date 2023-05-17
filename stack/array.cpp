#include<bits/stdc++.h>
#include<iostream>
#define int long long int
using namespace std;
vector<int>  arraybeautiful(vector<int> &v){
    vector<int> t;
    stack<int> s;
    
    s.push(v[0]);
    for(int i=1;i<v.size();i++){
        if(!s.empty()){
           if(s.top()*v[i]<0){
               s.pop();

           }
           else{
            s.push(v[i]);
           }
    }
           else{
            s.push(v[i]);
           }
    }while (!s.empty())
    {
        int c=s.top();
        t.push_back(c);
        s.pop();
        
    }
   reverse(t.begin(),t.end());
   for(auto x:t){
    cout<<x<<" ";
   }
    return t;
    
}
int32_t main()
{
int t;
cin>>t;
while(t--)
{
int n;
cin>>n;
vector<int>v;
for(int i=0;i<n;i++)
{
int temp;
cin>>temp;
v.push_back(temp);
}
arraybeautiful(v);
}
return 0 ;
}