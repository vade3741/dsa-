#include<bits/stdc++.h>
#include<iostream>
#define int long long int
using namespace std;
int loadbalancing(vector<int> &v,int load,int n){

if(load%n!=0){
    return -1;
}


load=load/n;
int diff=0;
int ans=0;
int max_load =INT_MIN;
for(int i=0;i<n;i++){
diff+=( v[i]-load );
ans=max(diff,-diff);
max_load=max(max_load,ans);
}
return max_load;
}
int32_t main()
{
    while (1)
{
    

int n;
cin>>n;
if(n==-1){
break;
}
vector<int> v;
int load=0;
for(int i=0;i<n;i++){
    int temp;
    cin>>temp;
    v.push_back(temp);
    load+=v[i];
}
cout<<loadbalancing(v,load,n)<<endl;
}
return 0 ;
}