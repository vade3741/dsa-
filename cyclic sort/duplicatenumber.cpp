#include<bits/stdc++.h>
#include<iostream>
#define int long long int
using namespace std;
int findduplicate(vector<int> &nums){
int i=0;
while(i<nums.size()){
    if(nums[i]!=(i+1) && nums[i]!=nums[nums[i]-1]){
              swap(nums[i],nums[nums[i]-1]);
    }
    else{
        i++;
    }
} 
i=0;
while(i<nums.size()){
if(nums[i]!=(i+1)){
    return nums[i];
}
else{i++;}
}
return nums[nums.size()];
}
int32_t main()
{
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    cout<<findduplicate(v)<<endl;

}
return 0 ;
}