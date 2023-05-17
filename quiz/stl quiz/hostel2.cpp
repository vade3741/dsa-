#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main(){
int q;
int k;
cin>>q;
cin>>k;

priority_queue<int> q1;
for(int i=0;i<q;i++)

{int n;
cin>>n;
    if(n==1){

    int a,b;
    cin>>a>>b;
    q1.push(a*a+b*b);

  }
else if(n==2){
  while(q1.size()>k){
        q1.pop();
    }cout<<q1.top()<<endl;

}
}
return 0;
}