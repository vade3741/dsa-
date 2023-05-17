#include<bits/stdc++.h>
#include<iostream>
#define int long long int
using namespace std;
int parition(vector<int> &a,int start,int end){
    int i=start-1;
    int j=start;
    int pivot=a[end];
    while(j<end){
        if(a[j]<=pivot){
               i++;
               swap(a[i],a[j]);
        }
        
            j++;
        
    }
    swap(a[i+1],a[end]);
    return i+1;
}
void quick_sort(vector<int> &v,int start,int end){
    if(start>=end){
        return;
    }
   int p= parition(v,start,end);
   quick_sort(v,start,p-1);
   quick_sort(v,p+1,end);


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
     quick_sort(v,0,n-1);
     for(auto x:v){
        cout<<x<<" ";
     }
}
return 0 ;
}