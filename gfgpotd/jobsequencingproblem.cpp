#include<bits/stdc++.h>
#include<iostream>
#define int long long int
using namespace std;
struct job{
    int id;
    int dead;
    int profit;
};
bool comp(job x,job y){
return x.profit>y.profit;

}
vector<int> JobScheduling(job *arr,int n,vector<int> schedule){
    sort(arr,arr+n,comp);
   int maxi=INT_MIN;
   for(int i=0;i<n;i++){
maxi=max(arr[i].dead,maxi);
   }int count=0;
   int maxprofit=0;
  
   vector<int>visited(n,-1);
   int j=maxi;
   while(j>0){
    for(int i=0;i<n;i++){

        if(visited[i]==-1){
          
            if(j<=arr[i].dead){
                count++;
                maxprofit+=arr[i].profit;
                  visited[i]=0;
                  break;
            }
        }
    }
        j--;
       
      
   }
   schedule.push_back(count);
   schedule.push_back(maxprofit);
  

   return schedule;
}
int32_t main()
{
int t;
cin>>t;
while(t--)
{
int n;
cin>>n;
job arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i].id>>arr[i].dead>>arr[i].profit;
}vector<int> schedule;
vector<int> v=JobScheduling(arr,n,schedule);
for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}



}
return 0 ;
}