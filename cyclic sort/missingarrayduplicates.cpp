#include<bits/stdc++.h>
#include<iostream>
#define int long long int
using namespace std;
vector<int> missingarrayduplicates(vector<int> &nums){
int i=0;
while(i<nums.size()){
    if(nums[i]!=(i+1) &&nums[i]!=nums[nums[i]-1]){
        swap(nums[i],nums[nums[i]-1]);
    }
    else{i++;}
}
i=0;
vector<int>sums;
while(i<nums.size()){
if(nums[i]!=(i+1)){
sums.push_back(i+1);
}
i++;
}
return sums;
}
int32_t main()
{
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int> nums;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        nums.push_back(temp);
}
vector<int> v= missingarrayduplicates(nums);

for(auto x:v){
    cout<<x<<" ";
}
}
return 0 ;
}