#include<iostream>
#include<bits/stdc++.h>
#define int long long int
using namespace std;

bool cowcanplace(vector<int> &v,int c,int dist){

int count =1;
int d=0;
for(int i=1;i<v.size();i++){
if(v[i]-v[d]>=dist){
    count++;
    d=i;
if(count==c){
return true;
}
}

}
return false;
}
int binary_search(vector<int> &v,int l,int r,int n,int c){
int ans =INT_MIN;
while(r>=l){
    int mid =l +(r-l)/2;
    
    if(cowcanplace(v,c,mid)){
            ans=mid;
        l=mid+1;
    }
    else{
            r=mid-1;
    }
}
return ans;
}
int32_t main()
{
    int t;
    cin>>t;
    while(t--){
        int n,c;
        cin>>n>>c;
        vector<int> v;
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            v.push_back(temp);
        }

        sort(v.begin(),v.end());

        cout<<binary_search(v,1,v[n-1]-v[0],n,c)<<endl;

    }
      return 0;
}