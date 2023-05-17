//  Count the number of ways to reach the Nth Stair if you can take K steps, for eg if K = 3, we can take 1, 2 and 3 steps.
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int steps(int n,int k){
    if(n==0){
        return 1;
    }
    if(n<0){
        return 0;

    }
    int ans=0;
    for(int i=1;i<=k;i++){
        ans+=steps(n-i,k);
    }
    return ans;
}
int main()
{
    int n,k;
    cin>>n>>k;
    int c=steps(n,k);
    cout<<c<<endl;
      return 0;
}