#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,int> m1;
    map<pair<int,int>,int> m;
    pair<int,int> p1,p2;
    p1={1,2};
    p2={2,3};
    cout<<(p1>p2);//return  cause it is false
cout<<(p1<p2);//returns 1 cause it is true
//if first element are equal then it compares second element    
    //hence data in the map will be stored in a sorted order

    map<set<int>,int>m2; 
    set<int> s1={1,2,3};
    set<int> s2={2,4};
    cout<<(s1<s2);


    map<pair<string,string>,vector<int> >m3;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
string s;
string s1;
cin>>s;
cin>>s1;
int count;
cin>>count;
int x;
cin>>x;
       for(int i=0;i<count;i++){
        m3[{s,s1}].push_back(x);
       }
    }for(auto x:m3){
        cout<<x.first.first<<" "<<x.first.second<<endl;
    }
      return 0;
}