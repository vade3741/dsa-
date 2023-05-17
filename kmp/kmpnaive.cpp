#include<bits/stdc++.h>
#include<iostream>
#define int long long int
using namespace std;
int kmpnaive(string x,string y){
    int flag=0;
    if(x==y){
        return 0;
    }
    
for(int i=0;i<x.length();i++)
{
    for(int j=0;j<y.length();j++){
        if(x[i+j]==y[j]){
            
              flag=1;
        }
        else{
            flag=0;
            break;
        }
    }
    if(flag==1){
        return i;
    }
}
return -1;
}
int32_t main()
{
int t;
cin>>t;
while(t--)
{
string x;
cin>>x;
string y;
cin>>y;

cout<<kmpnaive(x,y)<<endl;
}
return 0 ;
}