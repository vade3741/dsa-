#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{ int t;
cin>>t;
for(int i =0;i<t;i++){
int N,A,B,C;
cin>>N;
cin>>A;
cin>>B;
cin>>C;
int k=0;
 for(int j=0;j<N;j++){
B=(B-A);
if(B>=0){
    k=A;
    cout<<B<<endl;
}
A=0;
B=B-C;
if(B>=0){
    k+=C;
}

 }
    cout<<B<<endl;
 }
      return 0;
}