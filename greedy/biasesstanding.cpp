#include<bits/stdc++.h>
#include<iostream>
#define int long long int
using namespace std;
struct Team{
    string name;
    int numbers;
};
int comp(Team m1,Team m2){
    return m2.numbers<m1.numbers;
}
int baisedstand(Team *arr,int n){
    sort(arr,arr+n,comp);
    int ans=0;
    int i=n;
    while(i>0){
        ans+=abs(i-arr[n-i].numbers);
        
        i--;
    }
    return ans;
}
int32_t main()
{
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    Team arr[n];
    for(int i=0;i<n;i++){
    
    cin>>arr[i].name>>arr[i].numbers;
    }
cout<< baisedstand(arr,n)<<endl;
// for(int i=0;i<n;i++){
//     cout<<arr[i].name<<" ";
//     cout<<arr[i].numbers<<" ";
// }
}
return 0 ;
}