#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int lazy[10000]={0};
int querylazy(int *tree,int ss,int se,int qs,int qe,int index){
    //before going down resolve the value of ot exists


if(lazy[index]!=0){
    tree[index]+=(se-ss+1)*lazy[index];
    if(ss!=se){
        lazy[2*index]+=lazy[index];
        lazy[2*index+1]+=lazy[index];
    }
    lazy[index]=0;
    //clear the value at current lazy node


}
if(ss>qe||se<qs){
    return 0;
}
//recursive cases
//optimisation case if complete overlap then simply return form that node
if(ss>=qs&&se<=qe){
return tree[index];

}
int mid=(ss+se)/2;
//partial oveplap
int left =querylazy(tree,ss,mid,qs,qe,2*index);
int right=querylazy(tree,mid+1,se,qs,qe,2*index+1); 
//update the tree index
return left+right;
}
void buildTree(int *a, int s, int e, int *tree, int index)
{
    if (s == e)
    {
        tree[index] = a[s];
        return;
    }
    // Recursive case
    int mid = (s + e) / 2;
    buildTree(a, s, mid, tree, 2 * index);
    buildTree(a, mid + 1, e, tree, 2 * index + 1);
    tree[index] = tree[2 * index] + tree[2 * index + 1];
    return;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int *tree = new int[4 * n + 1];
    buildTree(arr, 0, n - 1, tree, 1);


    // lets the print the tree array
   
int q;
cin>>q;
while(q--){
    int l,r;
    cin>>l>>r;
    l--;
    r--;
    cout<<querylazy(tree,0,n-1,l,r,1)<<endl;
}  


    return 0;
}