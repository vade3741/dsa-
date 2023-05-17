#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int a[10000];
int BIT[10000]={0};
void update(int i,int n,int increment){
    while(i<=n){
        BIT[i]+=increment;
        i+=(i&(-i));
    }
}
//sum till ith index-log(n) times
int query(int i){
int ans=0;
while(i>0){
    ans+=BIT[i];
    i-=(i&(-i));
}
return ans ;
}
int main()
{
    int n;
    cin>>n;
    //build function
    for(int i=1;i<=n;i++){
        cin>>a[i];
        update(i,n,a[i]);
         }
         int q;
         cin>>q;
         while(q--){
            int l,r;
            cin>>l>>r;
            cout<<query(r)-query(l-1)<<endl;

         }

      return 0;
}