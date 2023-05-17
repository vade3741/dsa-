#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int  long long int


vector<vector<long long>> multiply(vector<vector<long long>> a, vector<vector<long long>> b)
{
    vector<vector<long long>> t(3,vector<long long>(3));
    for (int i = 1; i <= 2; i++)
    {
        for (int j = 1; j <= 2; j++)
        {
            for (int x = 1; x <= 2; x++)
            {
                t[i][j] = (t[i][j] + (a[i][x] * b[x][j]) ) ;
            }
        }
    }
    return t;
}
vector<vector<long long>> powers(vector<vector<long long>> mat, int n)
{
    if (n == 1)
    {
        return mat;
    }
    if (n & 1)
    {
        return multiply(mat, powers(mat, n - 1));
    }
    vector<vector<long long>> mat1 = powers(mat, n / 2);
    return multiply(mat1, mat1);
}
int matrixexpo(int n)
{
    if(n==0||n==1){
        return 1;
    }
   
    vector<int> F1(3);
    F1[1]=1;
    F1[2]=1;
    vector<vector<long long>> mat(3,vector<long long>(3));

    for (int i = 1; i <= 2; i++)
    {
        for (int j = 1; j <= 2; j++)
        {
            if (i < 2)
            {
                if (j == i + 1)
                {
                    mat[i][j] = 1;
                }
                else
                {
                    mat[i][j] = 0;
                }
            }
            else
            {
                mat[i][j] = 1;
            }
        }
    }
   
  
      mat = powers(mat, n - 1);
    
    int res = 0;
    for (int i = 1; i <= 2; i++)
    {
        res = (res + (mat[2][i] * F1[i]) ) ;
    }
    return res;
}void buildTree(int *a,int s,int e,int *tree,int index){
    if(s==e){
        tree[index]=a[s];
        return;
    }
    //Recursive case
    int mid=(s+e)/2;
    buildTree(a,s,mid,tree,2*index);
    buildTree(a,mid+1,e,tree,2*index+1);
    tree[index]=__gcd(tree[2*index],tree[2*index+1]);
return;

}int query(int *tree,int ss,int se,int qs,int qe,int index){
    //complete overlap
    if(qs<=ss&& qe>=se){
          return tree[index];
    
    }
    //no overlap
    if(qs>se||ss>qe){
           return 0;
    }
    //partial overlap
    int mid=(ss+se)/2;
    int left=query(tree,ss,mid,qs,qe,2*index);
    int right=query(tree,mid+1,se,qs,qe,2*index+1);
    return __gcd(left,right);
}

int32_t main()
{
    int n;
    cin >> n;
     int q;
 cin>>q;
    
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int *tree=new int[4*n+1];
    buildTree(a,0,n-1,tree,1);
    
 while(q--){
    int l,r;
    cin>>l>>r;
    int c=query(tree,0,n-1,(l-1),(r-1),1);
    
    int d =matrixexpo(c-1);
    cout<<d<<endl;

 }
   
    return 0;
}