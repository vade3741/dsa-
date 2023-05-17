#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    sort(arr,arr+n);int sum=arr[n-1]+arr[n-2];
	    int i=0;int j=n-1;int chk=0;
	    while(i<j){
	        if(arr[i]+arr[j]<sum){
	         