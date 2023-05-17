#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int maxsubarraysum(int n,vector<int> &v){
int sum=0;
    int ans=v[0];
    for(int i=0;i<n;i++){
           sum+=v[i];
    ans=max(ans,sum);
           if(sum<0){
            sum=0;
           }
    }
    return ans;
}
void printmaxsubarraysum(int n,vector<int> &v){
    int sum=0;
    int start=0;
    int end=0;
    
    for(int i=0;i<n;i++){
        sum+=v[i];
        if(sum>0){
        
            end++;
        }
        else{
            sum=0;
            start=i+1;
        }
    }
      cout << "Starting index " << start << endl
         << "Ending index " << end << endl;
}
int main()
{
    int n;
    cin>>n;
    vector <int> v;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    int d=maxsubarraysum(n,v);
    cout<<d<<endl;
    printmaxsubarraysum(n,v);
      return 0;
}