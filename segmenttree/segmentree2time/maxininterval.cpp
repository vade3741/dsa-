#include<bits/stdc++.h>
#include<iostream>
#define int long long int
using namespace std;
void buildtree(vector<int> &v,int *tree,int start,int end,int index){
if(start==end){
    tree[index]=v[start];
    return;
}
int mid=(start+end)/2;
buildtree(v,tree,start,mid,2*index);
buildtree(v,tree,mid+1,end,2*index+1);
tree[index]= max(tree[2*index],tree[2*index+1]);
return;
}
int32_t main()
{
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    int *tree=new int[4*n+1];
    buildtree(v,tree,0,n-1,1);
    for(int i=1;i<=17;i++){
        cout<<tree[i]<<" ";
    }
}
return 0 ;
}