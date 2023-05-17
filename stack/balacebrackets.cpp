#include<bits/stdc++.h>
#include<iostream>
#define int long long int
using namespace std;
int32_t main()
{
stack<char>s;
string st;
getline(cin,st);
for(int i=0;i<st.length();i++){
    if(st[i]=='{'||st[i]=='['||st[i]=='('){
        s.push(st[i]);
    }
    
else if(st[i]=='}'||st[i]==']'||st[i]==')'){
    if(s.empty()){
        cout<<"false";
        return 0;
    }  
       else if(s.top()=='(' &&st[i]==')'){
        s.pop();
    }
   else if(s.top()=='{' && st[i]=='}'){
           s.pop();
    }
     else if(s.top()=='[' && st[i]==']'){
         s.pop();
    }      
}
 

}
if(s.empty()){
    cout<<"true"<<endl;
}
else{
    cout<<"false"<<endl;
}
return 0 ;
}