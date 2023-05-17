#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
int q;
int k;
cin>>q;
cin>>k;
vector<int > v;
for(int i=0;i<q;i++){
int num;
cin>>num;

if(num==1){
    int a,b;
    cin>>a>>b;
    v.push_back(a*a+b*b);
    

}else if(num==2){
    sort(v.begin(),v.end());
    cout<<v[k-1]<<endl;
}
}

return 0;
}