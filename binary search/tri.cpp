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
        v.push_back(0);
        for(int i=1;i<n+1;i++){
            v.push_back(i+v[i-1]);
        }
        v.erase(v.begin());
        
    int start=0;
    int end=v.back();
    int mid;
    while (start<end)
    {
             mid=start+end/2;
    
    if(n>v[mid]){
start=mid+1;
    }else if(n<v[mid]){
        end=mid;
    }
    if(n==v[mid]){
        cout<<mid;
    }
    }cout<<mid;
      return 0;
}
}