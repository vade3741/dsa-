#include<bits/stdc++.h>
#include<iostream>
#define int long long int
using namespace std;
void build(vector<int> &v,int *tree,int start,int end,int index){
    if(start==end){
        tree[index]=v[start];
        return;
    }
    int mid=(start+end)/2;
    build(v,tree,start,mid,2*index);
    build(v,tree,mid+1,end,2*index+1);
    tree[index]=min(tree[2*index],tree[2*index+1]);
    // return;
}
int query(int *tree,int start,int end,int left,int right,int index){
if(start>right||end<left){
    return INT_MAX;
}
if(start>=left&&right>=end){
    return tree[index];
}
int mid=(start+end)/2;
int l = query(tree,start,mid,left,right,2*index);
int r = query(tree,mid+1,end,left,right,2*index+1);
return min(l,r);
}
void update(int *tree,int start,int end,int increment,int index,int i){
    if(end<i||start>i){
        return ;
    } if(start==end){
        tree[index]+=increment;
        return;
    }
    int mid=(start+end)/2;
    update(tree,start,mid,increment,2*index,i);
    update(tree,mid+1,end,increment,2*index+1,i);
    tree[index]=min(tree[2*index],tree[2*index+1]);
    // return;
    
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
    int *tree =new int[4*n+1];
    build(v,tree,0,n-1,1);
// int q;
// cin>>q;
// while(q--){
//     int l,r;
//     cin>>l>>r;
//     cout<<query(tree,0,n-1,l,r,1)<<" ";
// }
update(tree,0,n-1,10,1,1);


}
return 0 ;
}