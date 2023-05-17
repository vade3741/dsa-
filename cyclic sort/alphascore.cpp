#include<bits/stdc++.h>
#include<iostream>
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
int j=0;
int sum=0;
int overallsum=0;
for(int i=1;i<n;i++){
    sum=0;
    j=0;
while(j<i){
    if(v[j]<v[i]){
        sum+=v[j];
    }
    j++;
}
    
overallsum =(overallsum+sum)%1000000007;
}
cout<<(overallsum)<<endl;
return 0 ;
}