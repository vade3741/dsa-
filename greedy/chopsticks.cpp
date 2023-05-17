#include<bits/stdc++.h>
#include<iostream>
#define int long long int
using namespace std;
bool comp(int v1,int v2){
   return v1>v2;
}
int chopsticks(vector<int> &v,int d){
    sort(v.begin(),v.end(),comp);
    int diff=0;
    int i=1;
    int count=0;
    while(i<v.size()){
           diff= abs(v[i]-v[i-1]);
           if(diff>d){
                   i++;
           }
           else{
               i++;
               i++;
               count++;
           }

    
    }
    return count;
}

int32_t main()
{
int n,d;
cin>>n>>d;

vector<int> v;
for(int i=0;i<n;i++){
    int temp;
    cin>>temp;
    v.push_back(temp);
}
cout<<chopsticks(v,d)<<endl;

return 0 ;
}