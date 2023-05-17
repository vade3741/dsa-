#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int n;
vector<int> v(n+1,1);
void alloccurence(int *a,int i,int n,int key){
    if(i==n){
        return;
    }//stopping condition of a for looop
    if(a[i]==key){
        cout<<i<<" , ";
    }//if condition of a for loop
    //incrementing of i in for loop  
    return alloccurence(a,i+1,n,key);
}
vector<int> insert(int i,int key){
         int j=0;
    while(j<key){
             v[i]=key;
             j++;
    }
}
void alloccurence(vector<int> a,int n,int key){
    for(int i=0;i<n;i++){
             if(a[i]==key){
                    
             }
             

    }
    }

int main()
{
      return 0;
}