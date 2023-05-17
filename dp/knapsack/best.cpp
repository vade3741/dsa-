#include<bits/stdc++.h>
#include<iostream>
#define int long long int
using namespace std;
int co=0;

void solve(int n,int a,int b,int c,int d,vector<int>temp){
if(n==0){
    int sum=0;
    for(auto x:temp){
        sum+=x;
        }

        cout<<sum<<endl;
        while(sum>0){

            if(sum%10==c||sum%10==d){
                co++;
            }
                sum=sum/10;
        }
    return;

   
}
temp.push_back(a);
solve(n-1,a,b,c,d,temp);
temp.pop_back();
temp.push_back(b);
solve(n-1,a,b,c,d,temp);
}
int32_t main()
{
int t;
cin>>t;
while(t--)
{
int n;
cin>>n;
int a,b,c,d;
cin>>a>>b>>c>>d;
vector<int>temp;
solve(n,a,b,c,d,temp);
cout<<co<<" ";
}
return 0 ;
}