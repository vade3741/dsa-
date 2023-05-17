#include<iostream>
#include<bits/stdc++.h>
using namespace std;

float binary_search(vector<int> &v,int s,int e,int n,int p){
        float ans=-1;
    while(e>=s){
        int mid=s+(e-s)/2;
        if(v[mid]*v[mid]==n){
            return v[mid];
        }
        if(v[mid]*v[mid]>n){
            e=mid-1;
        }
        else{
            ans=v[mid];
            s=mid+1;
        }
    }
    float inc=0.1;
    for(int j=0;j<p;j++){
    while (ans*ans<=n)
    {
    ans+=inc;    
    }
    ans-=inc;
    inc/=10;

     } return ans;
}
int main()
{
    int t;
    cin>>t;
      while(t--){
        int n;
        cin>>n;
        vector<int> v;
        for(int i=1;i<=n;i++){
        
            v.push_back(i);

        }
        int p;
        cin>>p;
        cout<<binary_search(v,0,n-1,n,p)<<endl;

              }
      return 0;
}