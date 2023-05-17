#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v;
    int sum[1000000]={0};
    int count[1000000]={0};
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    
    for(int i=0;i<n;i++){
        count[v[i]]++;
    }
      for(int i=1;i<=100000;i++){
            for(int j=i;j<=100000;j+=i){
                sum[i]+=count[j];
            }
        }
    
    int q;
    cin>>q;
    while (q--)
    {
        int k;
        cin>>k;
      cout<<sum[k]<<endl;
    }
    
      return 0;
}