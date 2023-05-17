#include<bits/stdc++.h>
#include<iostream>
#define int long long int
using namespace std;
int optimalgame(vector<int> &v,int i,int j){
    if(i>=j){
        return 0;
    }
    return max(v[i]+optimalgame(v,i+1,j),v[j]+optimalgame(v,i,j-1));

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
cout<<optimalgame(v,0,n-1)<<endl;
}
return 0 ;
}