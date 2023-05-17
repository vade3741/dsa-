#include<bits/stdc++.h>
#include<iostream>
#define int long long int
using namespace std;
struct cows{
    int distance;
    int fuel;
};
bool comp(cows a1,cows a2){
   return a1.fuel>a2.fuel;


}
int mindist(cows *arr,int n,int l,int p){
    sort(arr,arr+n,comp);
    int fuel=p;
    int i=0;
    int distance=l;
    int count=0;
    while(distance>0 && i<n){
        if(fuel-distance>=0){
                return count;
        }
    if(fuel<distance-arr[i].distance||distance-arr[i].distance==0){
        i++;
    }
    else{
        fuel+=arr[i].fuel;
        fuel-=distance-arr[i].distance;
        distance=arr[i].distance;
        count++;
        i=0;
    }
    }

    return -1;
}
int32_t main()
{
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    cows  arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i].distance;
        cin>>arr[i].fuel;
    }
    int l,p;
    cin>>l>>p;
cout<<mindist(arr,n,l,p)<<endl;


    
}
return 0 ;
}