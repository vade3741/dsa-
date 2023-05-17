#include<iostream>
using namespace std;
void generate(int n,char s[],int i){

if(n==i){
      s[i+1]='\0';
    
    return;
}
if(s[i]=='1'){
    s[i+1]='0';
    generate(n,s,i+1);
}
if(s[i]=='0'){
    s[i+1]='0';
    generate(n,s,i+1);
    s[i+1]='1';

    generate(n,s,i+1);
    
}
}void generatestring(int n){
    char str[n];
    str[0]='0';
    generate(n,str,0);
    str[0]='1';
    generate(n,str,0);

}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        generatestring(n-1);
    }
      return 0;
}