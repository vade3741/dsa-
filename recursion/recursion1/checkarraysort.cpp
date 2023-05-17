//write a recursive function to check if array is sorted or not
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool checkarraysorted(int arr[],int n){
if(n==0||n==1){
    return true;
}
if(arr[0]<arr[1] &&checkarraysorted(arr+1,n-1)){
    return true;
}
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
    cout<<checkarraysorted(arr,n)<<endl;
      return 0;
}