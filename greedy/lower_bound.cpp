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
int key;
cin>>key;
cout<<(lower_bound(v.begin(),v.end(),key)-v.begin());
return 0 ;
}