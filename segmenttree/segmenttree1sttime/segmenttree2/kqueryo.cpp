#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int a[100000+10];
int k;
struct segment_tree
{
    vector<int> st [3*30000+10];
    void build(int start, int end, int index)
    {
        if (start == end)
        {
            st[index].push_back(a[start]);
            return;
        }
        int mid = (start + end) / 2;
        build(start, mid, 2*index+1);
        build(mid + 1, end, 2*index+2);
        merge(st[2 * index + 1].begin(), st[2 * index + 1].end(), st[2 * index + 2].begin(), st[2 * index + 2].end(), back_inserter(st[index]));
    }
int query(int ss,int se,int qs,int qe,int k,int index){
    //complete overlap

    if(qs<=ss&& qe>=se){
          return st[index].size()-(upper_bound(st[index].begin(),st[index].end(),k)-st[index].begin());
    }
    //no overlap
    if(qs>se||ss>qe){
           return 0;
    }
    //partial overlap
    int mid=(ss+se)/2;
    int left=query(ss,mid,qs,qe,k,2*index+1);
    int right=query(mid+1,se,qs,qe,k,2*index+2);
    
    return left+right;
}
}tree;
int main()
{
    int i,j;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    tree.build(0,n-1,0);
    int q;
    cin>>q;
    int ans=0;
        while(q--){
         int k,l,r;
          cin>>i>>j>>k;
           l=i^ans;  
           r=j^ans;  
          k^=ans;
          l--;
          r--;
            ans=tree.query(0,n-1,l,r,k,0);
           cout<<ans<<endl;
        }
    
    return 0;
}