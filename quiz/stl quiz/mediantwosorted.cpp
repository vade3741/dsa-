#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
     vector<int>v1;
     vector<int>v2;
     vector<int>v3(2*n);

    for(int i=0;i<n;i++){
    int num1;
    cin>>num1;
    v1.push_back(num1);
    }  for(int i=0;i<n;i++){
    int num2;
    cin>>num2;
    v2.push_back(num2);
    }
    merge(v1.begin(),v1.end(),v2.begin(),v2.end(),v3.begin());
    int mid =(v3.size()-1)/2;
    cout<<v3[mid];
      return 0;
}