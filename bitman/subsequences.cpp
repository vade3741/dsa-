#include<iostream>
#include<bits/stdc++.h>
using namespace std;
/*
finding sunsequences/subsets of a given a string 
Input-"AbC"
output -" ",a ,ab,abc,b,bc,c,ac

*/
void filterchars(int n,char a[]){
    int j=0;
    while(n>0){
        int last_bit=(n&1);
        if(last_bit==1){
            cout<<a[j];
        }
   j++;
   n=n>>1; 
    }
    cout<<endl;
}
void printsubsets(char a[]){
    int n=strlen(a);
    for(int i=0;i<(1<<n);i++){
filterchars(i,a);
    }
}
int main()
{
    char a[100];

cin>>a;
printsubsets(a);
      return 0;
}