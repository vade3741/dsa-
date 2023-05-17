// Given n friends, each one can remain single or can be paired up with some other friend. Each friend can be paired only once. Find out the total number of ways in which friends can remain single or can be paired up.
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int friends(int n){
    if(n==0||n==1){
        return 1;
    }
    return friends(n-1)+(n-1)*friends(n-2);
}
int main()
{
    int n;
    cin>>n;
    cout<<friends(n);
      return 0;
}