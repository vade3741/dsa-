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
int main()
{ int n;
cin>>n;

    def(n);

      return 0;
}