#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    vector<int> v;
    vector<int> a;
        int temp;
    a.push_back(INT_MIN);
        cin>>temp;
    v.push_back(temp);
    for(int i=1;i<n;i++){
        cin>>temp;
        v.push_back(temp);
        a.push_back(v[i]-v[i-1]);

    }
    int count=0;
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){

        if(a[i]==a[i+1]){
             count++;
        }
        else{
            count=0;
        }
        maxi=max(maxi,count);
    
    }
    cout<<maxi+2<<endl;
    
    }
      return 0;
}