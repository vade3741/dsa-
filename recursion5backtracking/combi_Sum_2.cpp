#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void combinational_sum(set<vector<int>> &ans,int index,int n,vector<int> &v,int *arr,int sum){

if(index==n){
    if(sum==0){
        sort(v.begin(),v.end());
        ans.insert(v);
    }
    return;
}

if(sum>=arr[index]){
v.push_back(arr[index]);

combinational_sum(ans,index+1,n,v,arr,sum-arr[index]);
v.pop_back();
}
combinational_sum(ans,index+1,n,v,arr,sum);

}
void Print_Vector(vector<int> Vec)
{
    for (int i = 0; i < Vec.size(); i++) {
        cout << Vec[i] << " ";
    }
    cout << endl;
    return;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> v;
    set <vector<int>> ans;
    int sum;
    cin>>sum;
    combinational_sum(ans,0,n,v,arr,sum);
      for (auto it = ans.begin();
         it != ans.end();
         it++) {
  
        Print_Vector(*it);
    }
      return 0;
}