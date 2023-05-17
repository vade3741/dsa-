#include<bits/stdc++.h>
#include<iostream>
#define int long long int
using namespace std;
int missing_number(vector<int> &nums){
int i=0;
while(i<nums.size()){
    if(nums[i]<nums.size() && nums[i]!=i){
         swap(nums[i],nums[nums[i]]);
    }
    else{
        i++;
    }
} i=0;
while(i<nums.size()){
if(nums[i]!=i){
    return i;

}
i++;
}
return nums.size();
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
     cout<<missing_number(nums)<<endl;
 
    }
return 0 ;
}