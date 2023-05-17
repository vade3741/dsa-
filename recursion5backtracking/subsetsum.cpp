#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool subsequences(int index,int n ,vector<int> &v,int *arr,int sum,int s){
    
    if(index==n){

             if(s==sum && v.size()!=0){
                    return true;     
            }
            return false;
    }
    
          v.push_back(arr[index]);
    s+=arr[index];
          if(subsequences(index+1,n,v,arr,0,s)==true)
          {
            return true;
          }
          v.pop_back();
    s-=arr[index];
          if(subsequences(index+1,n,v,arr,0,s)==true){
            return true;
          }    
          return false;
}
int main()
{
  int t;
  cin>>t;
  while(t--)
{    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> v;
    
   bool d= subsequences(0,n,v,arr,0,0);
   if(d==true){
    cout<<"Yes"<<endl;
   }else{
    cout<<"No"<<endl;
   }
     }     return 0;
}