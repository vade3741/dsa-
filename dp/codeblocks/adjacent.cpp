#include<bits/stdc++.h>
#include<iostream>
#define int long long int
using namespace std;
int32_t main()
{
int t;
cin>>t;
while(t--)
{
int n;
cin>>n;
vector<int>v;
for(int i=0;i<n;i++)
{
int temp;
cin>>temp;
v.push_back(temp);
}
sort(v.begin(),v.end());
int target=v[n-1]+v[n-2];

int p=0;
int i=0;
int j=v.size()-1;
while(j>i){
    if(v[i]+v[j]<target){
        p=1;
        i++;
        j--;
    }
    else{
        p=0;
        break;
    }
}
if(p==1){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}

}
return 0 ;
}