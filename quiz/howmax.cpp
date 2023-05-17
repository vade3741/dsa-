#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int k=0;
        for(int i=1;i<=s.length();i++){
            if(s[i-1]=='1' && s[i]=='0'){
                k++;
            }
        }cout<<k+1<<endl;
    }
      return 0;
}