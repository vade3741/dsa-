#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main()
{
    int n;
    cin>>n;
    int arr[n];
    int xor_sum=0;
    for(int i=0;i<n;i++){
          cin>>arr[i];
             xor_sum=(xor_sum^arr[i]);
    }
    int flag=xor_sum;
    int x=0;
    for(int j=0;j<n;j++){
           x= (xor_sum)^arr[j];
            if(x>flag){
                flag =x;
            }

    }
    cout<<flag<<endl;
      return 0;
}