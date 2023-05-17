#include<iostream>
#include<bits/stdc++.h>
#define int long long int
using namespace std;

int binary_Search(int l,int r,int m,int x,int y,int n){
int ans=INT_MIN;
while(r>=l){
    int mid =l +(r-l)/2;
    if(mid*x<=((n-mid)*y+m)){
        ans=max(ans,mid);
l=mid+1;
    }
    else{
        r=mid-1;
    }
}
return ans;
}
int32_t main()
{
    int n,m,x,y;
    cin>>n>>m>>x>>y;
cout<<binary_Search(1,n,m,x,y,n)<<endl;
      return 0;
}