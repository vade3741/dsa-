// Q. Calculate the number of binary search tree with n nodes
//ans-->it is equal to the nth catalan  number 
//recursive way of doing it


#include<iostream>
#include<bits/stdc++.h>
using namespace std;
unsigned long int catalan(unsigned int n){
    if(n<=1){
        return 1;

    }
    unsigned long int res=0;
    for(int i=0;i<n;i++){
        res+= catalan(i)*catalan(n-i-1);
    }return res;
}
int main()
{int n;
cin>>n;
for(int i=0;i<n;i++){
    cout<<catalan(i)<<" ";

}cout<<catalan(n)<<endl;
      return 0;
}
