#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void subsequences(int index,int n ,vector<int> &v,int *arr,int sum,int s){
    
    if(index==n){

            if(s==sum){
          for(auto x: v){
            cout<<x<<" ";
    }if(v.size()==0){
        cout<<"{}";
    }
          cout<<endl;
            }
            return;
    }
    
          v.push_back(arr[index]);
    s+=arr[index];
          subsequences(index+1,n,v,arr,sum,s);
          v.pop_back();
    s-=arr[index];
          subsequences(index+1,n,v,arr,sum,s);    
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