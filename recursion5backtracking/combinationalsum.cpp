#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void combinational_sum(vector<vector<int>> &ans,int index,int n,vector<int> &v,int *arr,int sum){

if(index==n){
    if(sum==0){
        ans.push_back(v);
    }
    return;
}

if(sum>=arr[index]){
v.push_back(arr[index]);

combinational_sum(ans,index,n,v,arr,sum-arr[index]);
v.pop_back();
}
combinational_sum(ans,index+1,n,v,arr,sum);

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
    vector <vector<int>> ans;
    int sum;
    cin>>sum;
    combinational_sum(ans,0,n,v,arr,sum);
    for(int i=0;i<ans.size();i++){
    for(int j =0;j<ans[i].size();j++){
        cout<<ans[i][j]<<" ";
    }
    cout<<endl;
    }
      return 0;
}