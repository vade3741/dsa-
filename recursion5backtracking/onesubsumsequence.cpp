#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool subsequences(int index,int n ,vector<int> &v,int *arr,int sum,int s){
    
    if(index==n){

            if(s==sum){
          for(auto x: v){
            cout<<x<<" ";
    }
          cout<<endl;
            return true;
            }
            return false;
    }
    
          v.push_back(arr[index]);
    s+=arr[index];
          if(subsequences(index+1,n,v,arr,sum,s)==true)return true;
          v.pop_back();
    s-=arr[index];
          if(subsequences(index+1,n,v,arr,sum,s)==true)return true;   
          return false; 
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> v;
    int sum;
    cin>>sum;
    subsequences(0,n,v,arr,sum,0);
      return 0;
}