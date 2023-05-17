#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define int long long int
int getsetbit(int n){
    for(int i=0;i<64;i++){
        int mask=1<<i;
    if((n&mask)>0){
        // cout<<i;
         return i;
    }
    }
    return 0;
}
int32_t main()
{
    int n;
    cin>>n;
    vector<int> v;
    vector<int> v1;
      int temp;
        cin>>temp;
        v.push_back(temp);
        if(n>64){
            cout<<"YES"<<endl;
        }else{
    for(int i=1;i<n;i++){
               cin>>temp;
        v.push_back(temp);
              int num =(v[i-1])^(v[i]);
          int c=getsetbit(num);
          v1.push_back(c);
          
        }
        int ans=0;
        int j=0;
        for(int i=0;i<n;i++){
            ans=(ans^v1[i]);
            if(ans==0){
                j=1;
                break;
                
            }
        }
        if(j==1){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
             }     return 0;
}