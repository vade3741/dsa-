#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define MAX 54000
struct treenode{
   long long int prefixsum;
   long long int  suffixsum;
    long long int totalsum;
   long long  int maxsum;

};
    
    int arr[MAX+1];
    treenode tree[1000002];

void buildTree(int s,int e,int index){
    if(s > e)
        return;
    if(s==e){
        tree[index]=((treenode){arr[s],arr[s],arr[s],arr[s]});
    return;
    }
    //Recursive case
    int mid=(s+e)/2;
    buildTree(s,mid,2*index+1);
    buildTree(mid+1,e,2*index+2);
    treenode left=tree[2*index+1];
    treenode right=tree[2*index+2];
    tree[index].prefixsum=max(left.prefixsum,right.prefixsum+left.totalsum);
    tree[index].suffixsum=max(right.suffixsum,left.suffixsum+right.totalsum);
    tree[index].totalsum=left.totalsum+right.totalsum;
tree[index].maxsum=max(left.suffixsum+right.prefixsum,max(left.maxsum,right.maxsum));


}
 treenode query(int ss,int se,int qs,int qe,int index){
    //complete overlap

    if(qs<=ss&& qe>=se){
          return tree[index];
    }
    //no overlap
    if(qs>se||ss>qe||ss>se){
           return ((treenode){INT_MIN,INT_MIN,INT_MIN,INT_MIN});
    }
    //partial overlap
    int mid=(ss+se)/2;
    treenode left=query(ss,mid,qs,qe,2*index+1);
    treenode right=query(mid+1,se,qs,qe,2*index+2);
    treenode temp;
        temp.prefixsum=max(left.prefixsum,right.prefixsum+left.totalsum);
    temp.suffixsum=max(right.suffixsum,left.suffixsum+right.totalsum);
    temp.totalsum=left.totalsum+right.totalsum;
temp.maxsum=max(left.suffixsum+right.prefixsum,max(left.maxsum,right.maxsum));
    return temp;
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
     cin>>arr[i];

    }
    buildTree(0,n-1,0);
    //lets the print the tree array
 int q;
 cin>>q;
 for(int i=0;i<q;i++){
    int l,r;
    cin>>l>>r;
    cout<<query(0,n-1,l-1,r-1,0).maxsum;
    if(i != q-1)
            cout<<endl;
 }

      return 0;
}