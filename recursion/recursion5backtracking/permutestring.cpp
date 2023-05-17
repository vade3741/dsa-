#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void permute(char *in,int i){
    if(in[i]=='\0'){
        cout<<in<<" ";
        return;

    }
    //recursive case
    for(int j=i;in[j]!='\0';j++){
        swap(in[i],in[j]);
        permute(in,i+1);
        //backtracking to restore the orignal array
        swap(in[i],in[j]);
    }
}//find unique string if letter repeats
void permutes(char *in,int i,set<string>&s){
    if(in[i]=='\0'){
        string t(in);
        s.insert(t);
        return;

    }
    //recursive case
    for(int j=i;in[j]!='\0';j++){
        swap(in[i],in[j]);
        permutes(in,i+1,s);
        //backtracking to restore the orignal array
        swap(in[i],in[j]);
    }
}
int main()
{
     char in[100];
     cin>>in;
     set<string>s;
// permute(in,0); 
permutes(in,0,s); 
for(auto x:s){
cout<<x<<" ";
}    
      return 0;
}