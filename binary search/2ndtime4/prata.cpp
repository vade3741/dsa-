#include<iostream>
#include<bits/stdc++.h>
#define int long long int
using namespace std;


bool cancookprata(vector<int> &v,int num_time,int p){
int sum=INT_MIN;

int j=1;
int prata_count=0;
for(int i=0;i<v.size();i++){
       sum=0;
       j=1;
       
   while(sum<=num_time){
sum+=v[i]*(j);

    j++;

    if(sum<=num_time){
prata_count++;  
    }

if(prata_count==p){
    return true;
}
    }
  
}
return false;
}
int binary_search(vector<int> &v,int l,int r,int p){
int ans=r;
while(r>=l){
    int mid=l+(r-l)/2;
    if(cancookprata(v,mid,p)){
        ans=min(ans,mid);
      
        r=mid-1;
    }
    else{
        l=mid+1;
    }
}
return ans;
}
int32_t main()
{
    int t;
    cin>>t;
    int sum=0;
    while(t--){
        int l,n;
        cin>>l>>n;
        vector<int> v;
        for(int i=0;i<n;i++){
                 int temp;
                 cin>>temp;
                 v.push_back(temp);
                 
        }
        int high=INT_MIN;
        		for(int i = 0; i < n; i++){

			
               high=max(high,v[i]*(l*(l+1))/2);
                }

               
  cout<<binary_search(v,1,high,l)<<endl;

    }
      return 0;
}