#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
     vector<int>v1;

     

    for(int i=0;i<2*n;i++){
    int num1;
    cin>>num1;
    v1.push_back(num1);
    }  sort(v1.begin(),v1.end());

    int mid =(v1.size()-1)/2;
    cout<<v1[mid];
      return 0;
}