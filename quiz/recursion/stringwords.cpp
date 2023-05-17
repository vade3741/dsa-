#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void generate_strings(char *in,char *output,int i,int j,vector<string> &v){
    if(in[i]=='\0'){
        output[j]='\0';
       
       string s;
s=output;
v.push_back(s);
       return;

    }
    int digit=in[i]-'0';
    // if(digit==0){
    //     output[j]='\0';
    // }
    char ch =digit +'a' -1;
    output[j]=ch;
    if(in[i+1]!='0' && in[i]!='0'){
    generate_strings(in,output,i+1,j+1,v); 
    }
    if(in[i+1]!='\0')
    {
        int seconddigit =in[i+1]-'0';
        int number =seconddigit+ digit*10;
    if(number<=26){
        ch=number+'a'-1;
        output[j]=ch;
        if(in[i]!='0'){
     generate_strings(in,output,i+2,j+1,v);
    } 
    }
    }
// return;
}
int main()
{
    char in[1000];

vector<string> v;
    cin>>in;
    char out[100];
    generate_strings(in,out,0,0,v);
     cout<<"[";
     auto it=v.begin();
for(;it!=(v.end()-1);it++){
    cout<<(*it)<<",";
}cout<<*it;
cout<<"]";
      return 0;
}