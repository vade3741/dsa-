#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void generatesubsequence(char *in,char *out,int i,int j){
    if(in[i]=='\0'){
        out[j]='\0';
        cout<<out<<endl;
        return;
    }
    //recursive case
    //we can include the current character
out[j]=in[i];
generatesubsequence(in,out,i+1,j+1);
    //we can eoxclude the current character
out[j]='\0';
generatesubsequence(in,out,i+1,j);
}
int main()
{
    char  input[]="abc";
    char output[10];
    generatesubsequence(input,output,0,0);
      return 0;
}