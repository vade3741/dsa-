#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int maxcrossingsum(vector<int> &v,int l,int mid,int h){
//going towards left
int sum=0;
int left_sum=INT_MIN;

int right_sum=INT_MIN;
for(int i=mid;i>=l;i--){
sum+=v[i];
if(sum>left_sum){
left_sum=sum;
}
}
 sum=0;
for(int i=mid;i<=h;i++){
sum+=v[i];
if(sum>right_sum){
right_sum=sum;
}
}
return max(max(left_sum+right_sum-v[mid],left_sum),right_sum);
}
int maxsubarraysum(vector<int> &v,int l,int r){
   //base case
    if (l > r)
          return INT_MIN;
    if(l==r){
        return v[l];
    }
    //recursove case
    int mid =(l+r)/2;
   return max(max(maxsubarraysum(v,l,mid-1),maxsubarraysum(v,mid+1,r)),maxcrossingsum(v,l,mid,r));

}
int main()
{

int n;
cin>>n;
vector<int> v;
for(int i=0;i<n;i++){
int temp;
cin>>temp;
v.push_back(temp);
}
int max_sum=maxsubarraysum(v,0,n-1);
cout<<max_sum<<" ";
      return 0;
}