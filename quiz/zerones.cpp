#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        string s="";
        s+='1';
       
    for(int i=1;i<n-1;i++){
        s+='0';
    }s+='1';
    cout<<s<<endl;
    
      }  return 0;
}