#include<bits/stdc++.h>
#include<iostream>
#define int long long int
using namespace std;

struct jobs{
    int id;
    int deadline;
    int profit; 
}job;

bool compare(jobs a,jobs b){
return b.profit<a.profit;
}
vector<int> maximumprofit(jobs *arr,int n){
vector<int> temp;
sort(arr,arr+n,compare);
int maxi=INT_MIN;
for(int i=0;i<n;i++){
maxi=max(maxi,arr[i].deadline);
}
int slot[maxi+1];
for(int i=0;i<=maxi;i++){
    slot[i]=-1;

}
int jobprofit=0;int countjobs=0;
for(int i=0;i<n;i++){
    for(int j=arr[i].deadline;j>0;j--){
        if(slot[j]==-1){
            slot[j]=i;
        countjobs++;
        jobprofit+=arr[i].profit;
            break;
        }
    }
}temp.push_back(countjobs);
     temp.push_back(jobprofit);
     return temp;
}
int32_t main()
{
int n;
cin>>n;
jobs arr[n];
for(int i=0;i<n;i++){
   
    int x,y,z;
    cin>>x>>y>>z;
 arr[i].id=x;
 arr[i].deadline=y;
 arr[i].profit=z;


}
vector<int> v=maximumprofit(arr,n);
for(auto x:v){
    cout<<x<<" ";
}
cout<<endl;

return 0 ;
}