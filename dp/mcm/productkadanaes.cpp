#include<bits/stdc++.h>
#include<iostream>
#define int long long int
using namespace std;
void kadane(vector<int> &v,int n){
int currentprod=1;
int overallsum=INT_MIN;
int start=0;
int end=0;
int s=0;
int count=0;
int prod=1;
int prod1=1;
int prod2=1;
vector<int> k;
for(int i=0;i<n;i++){
    if(v[i]<0){
        count++;
    }
    if(v[i]==0){
        k.push_back(i);
    }
}
if(count%2==0){
    if(k.size()==0){

    
for(int i=0;i<n;i++){
prod*=v[i];
}
    }
    else{
        for(int i=0;i<k.size();i++){
          
        }
        prod=max(prod1,prod2);
        if(prod<0){
            prod=0;
        }
    }
    cout<<prod<<endl;
}
else{


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