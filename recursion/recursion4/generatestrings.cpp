#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void generate_strings(char *in,char *output,int i,int j){
    if(in[i]=='\0'){
        output[j]='\0';
       cout<<output<<endl;
       return;

    }
    int digit=in[i]-'0';
    // if(digit==0){
    //     output[j]='\0';
    // }
    char ch =digit +'A' -1;
    output[j]=ch;
    generate_strings(in,output,i+1,j+1); 
  
    if(in[i+1]!='\0')
    {
        int seconddigit =in[i+1]-'0';
        int number =seconddigit+ digit*10;
    if(number<=26){
        ch=number+'A'-1;
        output[j]=ch;
     generate_strings(in,output,i+2,j+1);
    } 
    }
// return;
}
int main()
{
    char in[1000];

    cin>>in;
    char out[100];
    generate_strings(in,out,0,0);
     
      return 0;
}