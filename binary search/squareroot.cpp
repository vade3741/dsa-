#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{ 
    int n;
    cin>>n;
    int start=0;
    int end=n-1;

    
    while(start<=end){
        int mid =start-(start-end)/2;
        if(mid*mid==n){
cout<<mid;
        }
        if(mid*mid>n){
         end=mid-1;    
        }else{
            start=mid+1;
        }
    }
      return 0;
}