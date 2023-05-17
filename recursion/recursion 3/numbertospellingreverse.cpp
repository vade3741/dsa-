//we have given a number and we need to convert into spelling
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
char words[][10]={"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
//[]-->this is the pointer that gives first second three index list element
void printspelling(int n){
if(n==0){
    return;
}
int digit = n%10;
cout<<words[digit]<<" ";
printspelling(n/10);
}//this is top to bottom approach thats way it is 
//printing reverse
int main()
{
    int n;
    cin>>n;
    printspelling(n);
      return 0;
}