#include<bits/stdc++.h>
#include<iostream>
#define int long long int
using namespace std;

int divideandconquer(int *a,int n){
    if(n==1){
        return a[0];
    }
int left_sum=INT_MIN;
int right_sum=INT_MIN;
int sum=0;
int mid=n/2;
int l=divideandconquer(a,mid);
int r=divideandconquer(a+mid,n-mid);
for(int i=mid-1;i>=0;i--){
sum+=a[i];
left_sum=max(left_sum,sum);

}
sum=0;
for(int i=mid;i<n;i++){
sum+=a[i];
right_sum=max(right_sum,sum);

}
return max(left_sum+right_sum,max(l,r));

}
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cout<<divideandconquer(arr,n)<<endl;
    }
    return 0;
}