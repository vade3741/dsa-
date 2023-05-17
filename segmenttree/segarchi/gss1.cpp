#include<bits/stdc++.h>
#include<iostream>
#define int long long int
using namespace std;
// int divideandconquer(int *a,int n){
//     if(n==1){
//         return a[0];
//     }
// int left_sum=INT_MIN;
// int right_sum=INT_MIN;
// int sum=0;
// int mid=n/2;
// int l=divideandconquer(a,mid);
// int r=divideandconquer(a+mid,n-mid);
// for(int i=mid-1;i>=0;i--){
// sum+=a[i];
// left_sum=max(left_sum,sum);

// }
// sum=0;
// for(int i=mid;i<n;i++){
// sum+=a[i];
// right_sum=max(right_sum,sum);

// }
// return max(left_sum+right_sum,max(l,r));

// }
void build(vector<int> &v,int *tree,int start,int end,int index){
if(start==end){
    tree[index]=v[start-1];
    return;
}
int mid=(start+end)/2;
int left_sum=INT_MIN;
int right_sum=INT_MIN;
int sum=0;
build(v,tree,start,mid,2*index);
build(v,tree,mid+1,end,2*index+1);
for(int i=mid-1;i>=start-1;i--){
sum+=v[i];
left_sum=max(left_sum,sum);

}
sum=0;
for(int i=mid;i<end;i++){
sum+=v[i];
right_sum=max(right_sum,sum);

}
tree[index]=max(left_sum+right_sum,max(left_sum,right_sum));


}
int query(int *tree,int start,int end,int left,int right,int index){
    if(start>right||end<left){
        return INT_MIN;
    }
    if(start>=left&&end<=right){
        return tree[index];
    }
    int mid=(start+end)/2;
    int l=query(tree,start,mid,left,right,2*index);
    int r=query(tree,mid+1,end,left,right,2*index+1);
    return max(l+r,max(l,r));

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
    int *tree=new int[4*n+1];
    build(v,tree,1,n,1);
    for(int i=1;i<=13;i++)
    {
      cout<<tree[i]<<" ";
    }
    // int q;
    // cin>>q;
    // while(q--){
    //     int l,r;
    //     cin>>l>>r;
    //     cout<<query(tree,1,n,l,r,1)<<endl;
    
    // }
return 0 ;
}