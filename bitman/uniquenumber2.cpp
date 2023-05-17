#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int getbit(int x,int n){
    int i;
    for( i=0;i<n;i++){
    int mask=1<<i;
    if((x&mask)==1){
       break;
    }
    }
    return i;
}
int* list_2(int x,int *a,int n){
int b[n];
int c=getbit(x,n);
cout<<c;
int j=0;
for(int i=0;i<n;i++){

if(getbit(a[i],n)==c){
    cout<<a[i];
    b[j]=a[i];
    cout<<b[j]<<endl;
    j++;
    
}

}
return b;

}
int main()
{
    int n;
cin>>n;

    int a[100000];
int x=0;
    for(int i=0;i<n;i++){
cin>>a[i];
x=x^a[i];
}
int temp=x;
int pos=0;
cout<<x<<endl;

int *d=list_2(x,a,n);

for(int i=0;i<n;i++){


    cout<<*(d+i);
    }
      return 0;
}