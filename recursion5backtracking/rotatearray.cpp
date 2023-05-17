#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue <int> q;
    int n;
    cin>>n;
    while(n--){
        vector<int>v;
        int temp;
        cin>>temp;
        q.push(temp);
    }
    int k;
    cin>>k;
    for(int i=0;i<k;i++){
        int key=q.front();
        q.pop();
        q.push(key);
    }
     while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
     }    
      return 0;
}