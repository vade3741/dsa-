#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool checkboston(int n){
int sum=0;
int key=0;
int a=n;
while(n>0){
    sum+=n%10;
    n=n/10;
}n=a;
int b;
for(int i=2;i*i<n;i++){
    
    while(n%i==0){
        b=i;
        while(i>0){
    key+=i%10;
    
    i=i/10;

}i=b;
        

        n=n/i;
    }
}if(n>1){
          while(n>0){
    key+=n%10;
    
    n=n/10;

}
    
}

if(sum==key){
    return true;
}else{
    return false;
}
}
int main()
{
    int n;
    cin>>n;
    cout<< checkboston(n)<<endl;;

    
      return 0;
}