#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int x,y,GCD;
void extendedeuclid(int a,int b){
if(b==0){
    x=1;
    y=0;
    GCD=a;
    return;
}
extendedeuclid(b,a%b);
int current_x=y;
int current_y=x-(a/b)*y;
x=current_x;
y=current_y;

}
int mmi(int a,int m){
    
    
        extendedeuclid(a,m);
   return (x+m)%m; 
}

int main()
{
    int n;
    cin>>n;
    if(__gcd(n,1000000007)!=1){
        return 0 ;
    }
    int c= mmi(n,1000000007);
    cout<<c<<endl;

      return 0;
}