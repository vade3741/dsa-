#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int stringtoint(char *a,int n){
    
    if(n==0){
        return 0;
    }
   int sum= stringtoint(a,n-1);
        int digit=a[n-1]-'0';
        return (sum*10+digit);
        
}
int main()
{ 
    char a[]="1234";
    int len =strlen(a);
    int c=stringtoint(a,len);
    cout<<c<<" ";
      return 0;
}