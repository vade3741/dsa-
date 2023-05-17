#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
 int a=0,b=0;
    vector<int > v;
for(int i=0;i<n-1;i++){
int temp;
cin>>temp;
v.push_back(temp);
b=b^v[i];
a=a^i;
}a=a^(n-1)^n;
int d=a^b;
cout<<d<<endl;
      return 0;
}