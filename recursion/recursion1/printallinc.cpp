#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void def(int n){
if(n==0){
    return;

}
cout<<n<<" ";
return def(n-1);
}
void inc(int n){
    if(n==0){
    return;

}
 inc(n-1);
cout<<n<<" ";
}
int main()
{ int n;
cin>>n;

    def(n);
    cout<<endl;
    inc(n);

      return 0;
}