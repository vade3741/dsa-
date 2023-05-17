#include<bits/stdc++.h>
#include<iostream>
#define int long long int
using namespace std;
void kadane(vector<int> &v,int n){
int currentsum=0;
int overallsum=INT_MIN;
int start=0;
int end=0;
int s=0;
for(int i=0;i<n;i++){
if(currentsum+v[i]>=v[i]){
    currentsum+=v[i];
}
else{
    currentsum=v[i];
    s=i;
    // end=i;
}
// overallsum=max(overallsum,currentsum);
if(overallsum<currentsum){
    overallsum=currentsum;
    start=s;
    end=i;
}

}
// cout<<start<<" "<<end;
for(int i=start;i<=end;i++){
    cout<<v[i]<<" ";
}

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
kadane(v,n);

}
return 0 ;
}