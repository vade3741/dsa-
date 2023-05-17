#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,x;
        cin>>n>>x;
        int sum=0;
        vector<int>fresh;
        vector<int> cost;
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            fresh.push_back(temp);
        }
        for(int i=0;i<n;i++){
            int num;
            cin>>num;
            cost.push_back(num);
        }
      for(int i=0;i<n;i++){
        if(fresh[i]>=x){
sum+=cost[i];
        }
      }
           cout<<sum<<endl;
    }
      return 0;
}