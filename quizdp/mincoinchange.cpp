#include<bits/stdc++.h>
#include<iostream>
#define int long long int
using namespace std;
int coinchange(vector<int> v,int target){
    int n=v.size();
    int t[n+1][target+1];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=target;j++){
                    t[i][j]=0;
        }
    }
    t[0][0]=1;
    for(int i=1;i<=n;i++){
        for(int j=0;j<=target;j++){
            if(j>=v[i-1]){

                t[i][j]=t[i-1][j]+t[i][j-v[i-1]];
            }
            else{
                t[i][j]=t[i-1][j];
            }
        }
    }
return t[n][target];
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
int target;
cin>>target;
cout<<coinchange(v,target)<<endl;
}
return 0 ;
}