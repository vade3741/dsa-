#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void permutestring(vector <int> &s,int i,vector<vector<int>> &ans,int n){
if(i==(n-1)){
    
    ans.push_back(s);
    return;
}
for(int k=i;k<n;k++){
    swap(s[i],s[k]);
    
    permutestring(s,i+1,ans,n);
    swap(s[k],s[i]);

}

}
int main()
{
    int n;
    cin>>n;
    vector<int> s;
    vector<vector<int>> ans;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        s.push_back(temp);
    }


// sort(s.begin(),s.end());

    permutestring(s,0,ans,n);
    set<vector<int>>m;

   for (auto x : ans) {
        m.insert(x);
   }
      for(auto x : m){
        for(auto y : x){
            cout << y << " ";
        }
        cout << endl;
   }
      return 0;
}