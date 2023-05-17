#include<bits/stdc++.h>
#include<iostream>
#define int long long int
using namespace std;
int32_t main()
{
int t;
cin>>t;
while(t--)
{
int n;
cin>>n;
vector<vector<int>>v;
vector<int> p;
for(int i=0;i<n;i++){


for(int j=0;j<2;j++)
{
int temp;
cin>>temp;
p.push_back(temp);
}
}
v.push_back(p);
int mini=INT_MAX;
        int maxi=INT_MIN;
for(auto x:v){
    for(auto y:x){

    
     if(y>maxi){
                maxi=y;
            }
            if(y<mini){
                mini=y;
            }

}

}
   int count=0;
    for(int i=mini;i<=maxi;i++){
        for(auto x:v){
            for(int y=0;y<=2*n;y+=2){
            if(i>=y&&i<=y+1){
                count++;
            }
        }
    }
    }
        cout<<count;
}
return 0 ;
}