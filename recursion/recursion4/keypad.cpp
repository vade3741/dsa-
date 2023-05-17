// Given a string containing digits from 2-9 inclusive, return all possible letter combinations that the number could represent. Return the answer in any order.

// A mapping of digits to letters (just like on the telephone buttons) is given below. Note that 1 does not map to any letters.
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 char digits[][10]={"","","abc","def","ghi","jkl","mno","pqr","stu","wxyz"};
void generate_names(char *in,char *out,int i, int j){
    if(in[i]=='\0'){
        out[i]='\0';
        cout<<out<<endl;
        return;
    }
    //recursive case
    int digit=in[i]-'0';
    if(digit==0||digit==1){
              generate_names(in,out,i+1,j);
        }
    for(int k=0;digits[digit][k]!='\0';k++){
        
        out[j]=digits[digit][k];
        generate_names(in,out,i+1,j+1);
    }

return;
}
int main()
{
    char in[100];
    cin>>in;
    char output[1000];
    generate_names(in,output,0,0);
      return 0;
}