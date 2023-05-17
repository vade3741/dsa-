#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{double p;
cin>>p;
if(p==1){
      cout<<"367"<<endl;
}else{


int c=ceil(sqrt(2*365*log(1/(1-p))));
cout<<c<<endl;
      }      return 0;
}