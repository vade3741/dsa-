#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int subsequences(int index,int n ,int *arr,int sum,int s){
    
    if(index==n){
        if(s==sum)return 1;
            return 0;
    } 
    
    
          
    s+=arr[index];
          int left=subsequences(index+1,n,arr,sum,s);
        
    s-=arr[index];
          int right= subsequences(index+1,n,arr,sum,s);   
          return left+right; 
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int sum;
    cin>>sum;
    cout<<subsequences(0,n,arr,sum,0);
      return 0;
}