#include<bits/stdc++.h>
#include<iostream>
#define int long long int
using namespace std;
int minplatforms(int *arr ,int *dep,int n){
    sort(arr,arr+n);
    sort(dep,dep+n);
    int platform_Count=1;
    int i=1;
    int j=0;
    int result=1;
    while(i<n&&j<n){
if(dep[j]>=arr[i]){
i++;
platform_Count++;
}
else{
    j++;
platform_Count--;
}
if(result<platform_Count){
    result=platform_Count;
}
    }
    return result;
}
int32_t main()
{
int n;
cin>>n;
int arr[n];
int dep[n];
int temp;
for(int i=0;i<n;i++){
    cin>>arr[i];
}
for(int i=0;i<n;i++){
   cin>>dep[i];
}
cout<<minplatforms(arr,dep,n)<<endl;
return 0 ;
}