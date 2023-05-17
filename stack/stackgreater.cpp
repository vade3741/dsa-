#include<bits/stdc++.h>
#include<iostream>
#define int long long int
using namespace std;
void printstack(stack<int> &s){
    if(s.empty()){
        return;
    }
    int x= s.top();
    s.pop();
    printstack(s);
    cout<<x<<" ";
    s.push(x);
}
vector<int> nge(vector<int> &v,stack<int> &s){
int i=0;
for(int i=0;i<v.size();i++){
while(!s.empty()&& v[i]>v[s.top()]){
s.pop();
}
s.push(i);
}
}
int32_t main()
{
 int n;
 cin>>n;
 vector<int> v;
 stack<int> s;
 for(int i=0;i<n;i++){
    int temp;
    cin>>temp;
     v.push_back(temp);
 }
 vector<int> a=nge(v,s);
 
  
 
return 0 ;
}