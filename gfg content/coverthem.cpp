#include<iostream>
#include<bits/stdc++.h>
#define int long long int
using namespace std;
const int MOD=1e9+7;
int diff__pair(vector<int> v,vector<int> bombs){
    int sum=0;
       int i=0;
    int j=0;
    
    while(i<v.size()){
        if(j<v.size()){
        j++;
        if(j!=v.size()){
            int l=0;
            if(bombs[i]>=bombs[j]){
                l=bombs[i];
            }else{
                l=bombs[j];
            }
        
        sum+= ((abs(v[i]-v[j]))*l)%MOD;
        }
        }
        else{
            i++;
            j=i;
        }
    }
    return sum;
}
int32_t main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        vector<int>v;
        vector<int>bombs;
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            v.push_back(temp);
}
for(int i=0;i<n;i++){
            int bomb;

                cin>>bomb;
            bombs.push_back(bomb);


}
              int c=diff__pair(v,bombs);
              cout<<c<<endl;
    }
      return 0;
}