#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define int long long int

bool tree(vector<int> &v,int mid,int m){
int sum=0;
for(auto x:v){
    int c=x-mid;
 if(c>0){
sum=sum+c;
 }   
}if(sum>=m){
return true;

}
else{
    return false;
}
}
int32_t main(){
int n;
int m;
cin>>n;
cin>>m;
vector<int >v;
for(int i=0;i<n;i++){
    int num;
    cin>>num;
    v.push_back(num);
}
sort(v.begin(),v.end());
int ans=0;
int start=0;
int end=v.back();
while(end-start>1){
int mid=start -(start-end)/2;
if(tree(v,mid,m)){
ans=mid;
    start=mid;
}else{
    end=mid;
}
}cout<<ans;
return 0;
}