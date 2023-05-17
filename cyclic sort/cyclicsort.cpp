#include<bits/stdc++.h>
#include<iostream>
#define int long long int
using namespace std;
void cyclicsort(vector<int> &v){
    int i=0;
    while(i<v.size()){
           if(v[i]!=(i+1)){
            swap(v[i],v[v[i]-1]);
           }
           else{i++;}
    }
    
}
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
cyclicsort(v);
for(int i=0;i<n;i++){
    cout<<v[i]<<" ";
}

return 0 ;
}