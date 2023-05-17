#include<bits/stdc++.h>
#include<iostream>
#define int long long int
using namespace std;
void buildtree(int n,int left,int right,int l,int r,int &count){
if(n==1){
    count++;
    return;
}
if(n==0){
    return;
}
int mid=(left+right)/2;
if(!(mid-1<l||r<left)){
buildtree(n/2,left,mid-1,l,r,count);

}if(!(l>right||r<mid+1)){
buildtree(n/2,mid+1,right,l,r,count);
}
if((mid>=l) &&(mid<=r)&&(n%2==1)){
count++;
}

}
int32_t main(){
    int n,l,r;
    cin>>n>>l>>r;
   int c= pow(2,(int)log2(n)+1)-1;
 
 int count=0; 
buildtree(n,1,c,l,r,count);
cout<<count<<endl;

    return 0;
}