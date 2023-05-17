//we have given a number and we need to convert into spelling
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
char words[][10]={"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
//[]-->this is the pointer that gives first second three index list element
void printspelling(int n){
    //base case
if(n==0){
    return;
}//recursive case
//print the spelling of(280)
printspelling(n/10);
int digit = n%10;
//printing after the function call
cout<<words[digit]<<" ";
}//this is bottom to top approach thus printing not from behind
int main()
{
    int n;
    cin>>n;
    printspelling(n);
      return 0;
}