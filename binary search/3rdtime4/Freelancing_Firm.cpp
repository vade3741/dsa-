#include <iostream>
#include<bits/stdc++.h>
#define int long long int
using namespace std;

int32_t main() {
      int t;
      cin>>t;
      while(t--){
          int n,k;
          cin>>n>>k;
          vector<int> v;
          vector<int> ans;
          for(int i=0;i<n;i++){
              int temp;
              cin>>temp;
              v.push_back(temp);
          }
          int i=0;
          int j=v.size()-1;
          int p=1;
          while(j>=i){
        
              if(((j+1)*v[j]*p)>=((i+1)*v[i]*p)){
                  ans.push_back((j+1)*v[j]*p);
                  j--;
              }
              else{
                  ans.push_back((i+1)*v[i]*p);
                  i++;
              }
              p++;
          }
         
          int maxi=INT_MIN;
          for(int i=0;i<n;i++){
          maxi=max(maxi,ans[i]);    
          }
          cout<<maxi<<endl;
      }
	return 0;
}
