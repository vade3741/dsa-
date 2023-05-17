#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void filterchars(int n,vector<int > v1,vector<int> &s1,int start){
    
    int sum=0;
    for(int j=0;j<v1.size();j++)
    {
        if((n & (1<<j))){
            // cout<<v1[j];
             sum += v1[j+start];
        }

    }
    s1.push_back(sum);

    
}
void printsubsets(vector<int >v1,int n,vector<int >&s1,int start){
for(int i=0;i<pow(2,n);i++){
    filterchars(i,v1,s1,start);
}
}

int32_t main()
{
    int n,a,b;
    cin>>n;
    cin>>a;
    cin>>b;
    vector<int > v1;
    // vector<int > v2;
    v1.size()<=40;
    int q=n/2;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        v1.push_back(num);
    } 
    // for(int i=q;i<n;i++){
    //     int temp;
    //     cin>>temp;
    //     v2.push_back(temp);
    // } 
    vector<int >s1;
    vector<int >s2;
printsubsets(v1,q,s1,0);
printsubsets(v1,(n&1)?(q+1):q,s2,q);
// for(auto x:s1){
//     cout<<x<<endl;
// }
// for(auto x:s2){
//     cout<<x<<endl;
// }
sort(s2.begin(),s2.end());
long long int ans=0;
for(int i=0;i<s1.size();i++){

int it1=lower_bound(s2.begin(),s2.end(),a-s1[i])-s2.begin();
int it2=upper_bound(s2.begin(),s2.end(),b-s1[i])-s2.begin();

ans+=(it2-it1);
}
cout<<ans<<endl;
      return 0;
}