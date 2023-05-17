#include<bits/stdc++.h>
#include<iostream>
#define int long long int
using namespace std;
int knapsack(vector<int> weights,vector<int> profits,int weight,int n){
    if(n==0||weight==0){
        return 0;
    }int maxprofit=0;
    int inc=0;
    int exc=0;
    if(weights[n-1]<=weight){
       inc=profits[n-1]+ knapsack(weights,profits,weight-weights[n-1],n-1);
    }
    exc=knapsack(weights,profits,weight,n-1);
    maxprofit=max(inc,exc);
    return maxprofit;
}
int32_t main()
{
    int n;
    cin>>n;
    int temp;
vector<int> weights;
vector<int> profits;
for(int i=0;i<n;i++){
    cin>>temp;
    weights.push_back(temp);
    
}
for(int i=0;i<n;i++){
    cin>>temp;
    profits.push_back(temp);

}
int w;
cin>>w;
cout<<knapsack(weights,profits,w,n)<<endl;
return 0 ;
}