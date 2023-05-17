#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define int long long int

 
int32_t main()
{
    int n;
    cin>>n;
    int arr[n+1];
    int arr1[n+1];
        arr[0]=1;
        arr1[0]=1;
        int mul=1;

    for(int i=1;i<=n;i++){
        int temp;
        cin>>arr[i];
        
mul*=arr[i];
arr1[i]=mul;
        }
       
        int t;
        cin>>t;
       
        int ans;
        int a;
        int b;
        for(int i=0;i<t;i++){
             int l,r,m;
        cin>>l>>r>>m;
        int c = find(arr+1, arr + n, r) - arr;
        int d = find(arr+1, arr + n, l) - arr;
        
        a=arr1[c];
        b=arr1[d-1];
        
        ans=a/b;
        cout<<(ans)%m<<endl;
        }
      return 0;
}