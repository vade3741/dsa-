#include<iostream>
#include<bits/stdc++.h>
#define int long long int
using namespace std;
int sum[100000];
void sieve(){

for(int i=1;i<=100000;i++){
    for(int j=i;j<=100000;j+=i){

    if(i&1){
      sum[j]=sum[j]-i;
    }
    else {

        sum[j]=sum[j]+i;
    }

    }
}
}

int32_t main()
{
    int t;
    cin>>t;
    sieve();
    
    while(t--){
        int k;
        cin>>k;
        cout<<sum[k]<<endl;
    }
      return 0;
}