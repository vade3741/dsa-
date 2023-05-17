#include<bits/stdc++.h>
using namespace std;
char numbers[][10]={" ", ".+@$", "abc", "def", "ghi", "jkl" ,"mno", "pqrs" , "tuv", "wxyz"};
string searchIn [] = {
            "kartik", "sneha", "deepak", "arnav", "shikha", "palak",
            "utkarsh", "divyam", "vidhi", "sparsh", "akku"
    };
void storestring(string s,set<string> &ans){
    
for(int i=0;i<11;i++){
    if(searchIn[i].find(s) != string::npos){
        ans.insert(searchIn[i]);
    }
}
}
void printstring(string s,int length,int index,string n,set<string> &ans){

if(length==0){
    storestring(s,ans);
    return;
}
int digit = n[index]-'0';
string str=numbers[digit];
// cout<<str<<endl;
for(int i=0;i<str.length();i++){
printstring(s+str[i],length-1,index+1,n,ans);

}


}
int main()
{
    string s="";
    string n;
    cin>>n;
    set<string> ans;
    printstring(s,n.length(),0,n,ans);
    for(auto x:ans){
         cout<<x<<" ";
    }
      return 0;
}