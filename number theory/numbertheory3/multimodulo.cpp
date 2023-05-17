//solving a linear diophantime equation
//we need to find a solution to a given equation ax+by=c
//if solution exist then print any
//asssuming g=gcd(a,b)
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//extended euclidean algo
int gcd(int a,int b,int &x,int &y){
    if(b==0){
        x=1;
        y=0;
        return a;
    }int x1,y1;
    int d=gcd(b,a%b,x1,y1);
    x=y1;
    y=x1-(a/b)*y1;
    return d;
}
int main()
{
    int t;
    cin>>t;
    int a,b,c,x,y;
    for(int i=0;i<t;i++){
    cin>>a>>b>>c;
    if(find_any_solution(a,b,c,x,y)==false){
        cout<<"SOLUTION DOES NOT EXIST"<<endl;
    }else{
        cout<<x<<" "<<y<<endl;
    }
    }
      return 0;
}