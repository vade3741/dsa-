#include<bits/stdc++.h>
#include<iostream>
#define int long long int
using namespace std;
struct Item{
    int value;
    int weight;
};
bool comp(Item x,Item y){
double r1=x.value/(double)x.weight;
double r2=y.value/(double)y.weight;
return r2<r1;
}
double knapsack(Item *arr,int weights,int n){
    sort(arr,arr+n,comp);
    int curweight=0;
    double finalweight=0.0;
    for(int i=0;i<n;i++){
        if(curweight+arr[i].weight<=weights){
         curweight+=arr[i].weight;
finalweight+=arr[i].value;

        }else{
            int w=weights-curweight;
            finalweight+=(arr[i].value/(double)arr[i].weight)*(double)w;
           break;
        }
    }
        return finalweight;
}
int32_t main()
{
int n;
cin>>n;
int w;
cin>>w;
Item arr[n];

for(int i=0;i<n;i++){
    int x,y;
    cin>>x>>y;
    arr[i].value=x;
    arr[i].weight=y;
}

cout<<knapsack(arr,n,w)<<endl;
return 0 ;
}