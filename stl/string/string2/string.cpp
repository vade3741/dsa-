#include<iostream>
using namespace std;
int main()
{ int n;
cin>>n;//number of strings that user wants to enter
        cin.get();
        string s[100];
        for(int i=0;i<n;i++){
            getline(cin,s[i]);//this function is to get whole string includeing spaces
        }
 
      return 0;
}