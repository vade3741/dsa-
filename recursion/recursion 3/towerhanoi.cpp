#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void move(int n,char source,char helper,char destination){
  if(n==0){
    return;
  }
    move(n-1,source,destination,helper);
 cout<<"SHIFT DISK"<<n<<"FROM"<<source<<"to"<<destination<<endl;
move(n-1,helper,source,destination);
}
int main()
{
    int n;
    cin>>n;
    move(n,'A','B','C');
      return 0;
}