#include<iostream>
#include<bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main()
{
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
         v.push_back(temp);
    }
    int i=0;
    int j=0;
    while(i<n){
        if(j<n){
        j++;
        if(j!=n){
        cout<<v[i]<<" "<<v[j]<<endl;
        }
        }
        else{
            i++;
            j=i;
        }
    }
      return 0;
}