#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int lazy[10000]={0};
void updaterangelazy(int *tree,int ss,int se,int l,int r,int inc,int index){
//before going down resolve the value of ot exists
if(lazy[index]!=0){
    tree[index]+=lazy[index];
    if(ss!=se){
        lazy[2*index]+=lazy[index];
        lazy[2*index+1]+=lazy[index];
    }
    lazy[index]=0;
    //clear the value at current lazy node

}
//base case
//no overlap
if(ss>r||se<l){
    return;
}
//recursive cases
//optimisation case if complete overlap then simply return form that node
if(ss>=l&&se<=r){
tree[index]+=inc;
if(ss!=se){
    lazy[2*index]+=inc;
    lazy[2*index+1]+=inc;
}
return;
} 
int mid=(ss+se)/2;
updaterangelazy(tree,ss,mid,l,r,inc,2*index);
updaterangelazy(tree,mid+1,se,l,r,inc,2*index+1); 
//update the tree index
tree[index]=min(tree[2*index],tree[2*index+1]);


  return;
}
int querylazy(int *tree,int ss,int se,int qs,int qe,int index){
    //before going down resolve the value of ot exists
if(lazy[index]!=0){
    tree[index]+=lazy[index];
    if(ss!=se){
        tree[2*index]+=lazy[index];
        tree[2*index+1]+=lazy[index];
    }
    lazy[index]=0;
    //clear the value at current lazy node


}
if(ss>qe||se<qs){
    return INT_MAX;
}
//recursive cases
//optimisation case if complete overlap then simply return form that node
if(ss>=qs&&se<=qe){
return tree[index];

}
//partial oveplap
int mid=(ss+se)/2;
int left =querylazy(tree,ss,mid,qs,qe,2*index);
int right=querylazy(tree,mid+1,se,qs,qe,2*index+1); 
//update the tree index
return min(left,right);
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
    tree[index] = min(tree[2 * index], tree[2 * index + 1]);
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

  updaterangelazy(tree,0,n-1,0,2,10,1);

  updaterangelazy(tree,0,n-1,0,4,10,1);
cout<<"Q1 1-1"<<" "<<querylazy(tree,0,n-1,1,1,1)<<endl;    
  updaterangelazy(tree,0,n-1,3,4,10,1);
cout<<"Q1 3-5"<<" "<<querylazy(tree,0,n-1,3,5,1)<<endl;    


    return 0;
}