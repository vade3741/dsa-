#include<bits/stdc++.h>
#include<iostream>
#define int long long int
using namespace std;
int kadane(int *arr,int n){
    int overallsum=arr[0];
       int currentsum=arr[0];
       for(int i=1;i<n;i++){
               
               if(currentsum>=0){
                  currentsum+=arr[i];
               }
               else{
                    currentsum=arr[i];
               }
               if(currentsum>overallsum){
                overallsum=currentsum;
               }
       }
    return overallsum;
}
int32_t main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
cout<<kadane(a,n)<<endl;
    
    
    }

    return 0;
}