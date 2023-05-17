#include<iostream>
#include<bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main()
{
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
          int temp;
          cin>>temp;
          v.push_back(temp);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
           cout<<v[i] <<" "<<v[j]<<endl;
        }
    }
      return 0;
}