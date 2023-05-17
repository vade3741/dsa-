#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void fenerate_brackets(char *output,int n,int idx ,int open,int close){
    if(idx==2*n){
        output[idx]='\0';
        cout<<output<<endl;
        return;
    }
    //recursive case
    //we can include the brackets or not
    if(open<n){
        output[idx]='(';
        fenerate_brackets(output,n,idx+1,open+1,close);
    }
    if(close<open){
        output[idx]=')';
        fenerate_brackets(output,n,idx+1,open,close+1);
    }
}
int main()
{
    int n;
    cin>>n;
    char out[1000];
fenerate_brackets(out,n,0,0,0);
      return 0;
}