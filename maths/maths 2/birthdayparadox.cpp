#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
float x=1.0;
int people =0;
int num =365;
int denom =365;
float p;
cin>>p;
 if(p==1.0){
        cout<<366<<endl;
    }
while(x>(1-p)){
    // x is less than the threshold
    x=x*(num)/denom;
    num--;
    people++;
    cout<<"People "<<people<<" and x"<<x<<endl;
    }
    cout<<people<<endl;
    //if x is too small then value become too small that it cannot be stores in float
   //this is wrong for two significant x coreect approach isi in birthday paradox2
return 0;
}