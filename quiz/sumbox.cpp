#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{int t;
cin>>t;

for(int i=0;i<t;i++){
    // vector<int > v;
int n;
cin>>n;
int a;
cin>>a;
int sum=0;
int height = 1;
int num;
    for(int i=0;i<n;i++){
        cin>>num;
        if(sum+num>a) {
            sum = num;
            height++;

        }else{
            sum=sum+num;
        }
    }
    cout<<height<<endl;
}
      return 0;
}