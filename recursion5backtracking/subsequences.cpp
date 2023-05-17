#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void subsequences(int index,int n ,vector<int> &v,int *arr){
    if(index==n){
          for(auto x: v){
            cout<<x<<" ";
    }if(v.size()==0){
        cout<<"{}";
    }
          cout<<endl;
            return;
    }
          subsequences(index+1,n,v,arr);
          v.push_back(arr[index]);
          subsequences(index+1,n,v,arr);    
          v.pop_back();
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
    subsequences(0,n,v,arr);
      return 0;
}