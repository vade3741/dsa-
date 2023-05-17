#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
    //base case
    if(b==0){
        return a;
    }//recursive case
    return gcd(b,a%b);
}int lcm(int a,int b){
    return a*b/gcd(a,b);
}
int x,y,GCD;
void extendedEuclidMethod(int a,int b){
     if(b==0){
        x=1;
        y=0;
        GCD=a;
        return;
     }
     extendedEuclidMethod(b,a%b);
     int cx=y;
     int cy=x -(a/b)*y;
cout<<cx<<" "<<cy<<endl;
     x=cx;
     y=cy;

}
//assume the inverse exists
int inversemodulo(int a,int m){
    if(gcd(a,m)==1){
    extendedEuclidMethod(a,m);
    return (x+m)%m;
    }
    else{
        return -1;
    }
    }
int main()

{
    cout<<gcd(10,15)<<endl;

    cout<<gcd(14,10)<<endl;
    extendedEuclidMethod(18,30);
    cout<<x<<" "<<y<<endl;
    cout<<inversemodulo(6,7)<<endl;

      return 0;
}