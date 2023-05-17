// Given a positive integer N, count all possible distinct binary strings of length N such that there are no consecutive 1’s.
#include<iostream>
using namespace std;
int count(int n){
    if(n==1||n==0){
        return n;
    }
    return count(n-1)+count(n-2);
}
int main()
{
    int n;
    cin>>n;
    cout<<count(n+2);
      return 0;
}