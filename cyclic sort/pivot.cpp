#include<bits/stdc++.h>
#include<iostream>
#define int long long int
using namespace std;
int findpivot(vector<int> &v,int start,int end){
while(end>start){
int mid =(start+end)/2;
    if(v[start]<=v[mid-1] && v[mid] <=v[end]){
        return mid-1;
    }
    if(v[mid]>v[end]){
        start=mid+1;
    }
    if(v[start]>v[mid-1]){
    end=mid;
}
}
return start;
}
int32_t main()
{
int n;
cin>>n;
vector<int> v;
for(int i=0;i<n;i++){
    int temp;
    cin>>temp;
v.push_back(temp);
}
cout<<findpivot(v,0,n-1)<<endl;
return 0 ;
}