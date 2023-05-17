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
    tree[index]=min(tree[2*index],tree[2*index+1]);
    return;
}
int query(int *tree,int l,int r,int left,int right,int index){
if(left>=l && right<=r){
return tree[index];
}
if(left>r||l>right){
    return INT_MAX;
}
    int mid=(left+right)/2;

int q1=query(tree,l,r,left,mid,2*index);
int q2=query(tree,l,r,mid+1,right,2*index+1);
return min(q1,q2);
}
void updates(int *tree,int start,int end,int index,int increment,int i){
   if(i<start||i>end){
    return;
       }
    if(start==end){
        tree[index]+=increment;
          return;
    }
    
    int mid=(start+end)/2;
    updates(tree,start,mid,2*index,increment,i);
    updates(tree,mid+1,end,2*index+1,increment,i);
    tree[index]=min(tree[2*index],tree[2*index+1]);
    return;
}
void rangeupdates(int *tree,int start,int end,int index,int increment,int l,int r){
   if(r<start||l>end){
    return;
       }
    if(start==end){
        tree[index]+=increment;
          return;
    }
    
    int mid=(start+end)/2;
    rangeupdates(tree,start,mid,2*index,increment,l,r);
    rangeupdates(tree,mid+1,end,2*index+1,increment,l,r);
    tree[index]=min(tree[2*index],tree[2*index+1]);
    return;
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
int *tree =new int[4*n+1];
buildtree(v,tree,0,n-1,1);
int q;
cin>>q;
rangeupdates(tree,0,n-1,1,10,3,5);

while(q--){
    int l,r;
    cin>>l>>r;
    cout<<query(tree,l,r,0,n-1,1)<<endl;
}
return 0 ;
}