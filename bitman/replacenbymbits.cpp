#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int clearrangeitoj(int n,int i,int j){
  int maska=((~0)<<j+1);
  int maskb =((1<<i)-1);
  int maskt=(maska|maskb);
  int ans=n&maskt;
  return ans;

}int replacebits(int n,int m,int i,int j){
    int n_= clearrangeitoj(n,i,j);
    int ans=n_|(m<<i);
    return ans;
}
int main()
{ 
    int n;
    cin>>n;
    int j;
    cin>>j;
    int i;
    cin>>i;
    int m;
    cin>>m;
    int ans;
    //you are given two 32-bit numbers,Nand M and teo bit positions
    //i and j. write a method to set all bits between i and j in N equal to M

    ans=(m<<i|clearrangeitoj(n,i,j));
    cout<<ans;
    // cout<<replacebits(n,m,i,j);
      return 0;
}