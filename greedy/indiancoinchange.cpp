#include<bits/stdc++.h>
#include<iostream>
#define int long long int
using namespace std;
int make_change(vector<int> &v,int amount){
    int count=0;
    while(amount>0){
        int index=upper_bound(v.begin(),v.end(),amount)-v.begin()-1;
        if(index==-1){
            return -1;
        }
        amount-=v[index];
        count++;
        
    }
    return count;
}
int32_t main()
{
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    int amount;
    cin>>amount;
    cout<<make_change(v,amount)<<endl;
}

return 0 ;
}