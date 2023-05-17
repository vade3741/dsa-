#include<bits/stdc++.h>
#include<iostream>
#define int long long int
using namespace std;
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
    int m;
    cin>>m;
    sort(v.begin(),v.end());
    int i=0;
    int j=v.size()-1;
    int ans=INT_MAX;
    int c=0;
    int d=0;
    while(i<j){
        if(v[i]+v[j]==m){
            if(ans>v[j]-v[i]){
            ans=min(ans,v[j]-v[i]);
            c=v[j];
            d=v[i];
            }
            i++;
            j--;
        }
        else if(v[i]+v[j]>m){
           j--;
        }
        else{
            i++;
        }
    }
   cout<<"Deepak should buy roses whose prices are " <<d <<" and "<<c<<"."<<endl; 

}
return 0 ;
}