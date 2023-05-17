//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
unordered_map<string,int>m;
public:
int parenthesis(string &s,int i,int j,bool istrue){
if(i>j){
    return false;
}

if(i==j){
    if(istrue==true)
    return s[i]=='T';
    else{
        return s[i]=='F';
    }
}
string temp=to_string(i)+" "+to_string(j)+" "+to_string(istrue);
if(m.find(temp)!=m.end()){
    return m[temp];
}
int ans=0;
for(int k=i+1;k<j;k=k+2){
int lt=parenthesis(s,i,k-1,true);
int lf=parenthesis(s,i,k-1,false);
int rt=parenthesis(s,k+1,j,true);
int rf=parenthesis(s,k+1,j,false);
if(s[k]=='|'){
if(istrue==true){
    ans+=lt*rf+rt*lf+lt*rt;
}
else{
    ans+=lf*rf;
}
}
else if(s[k]=='&'){
if(istrue==true){
    ans+=lt*rt;
}
else{
    ans+=lf*rf+lt*rf+lf*rt;
}
}
else if(s[k]=='^'){
if(istrue==true){
    ans+=lt*rf+rt*lf;
}
else{
    ans+=lf*rf+lt*rt;
}
}
}
return m[temp]=ans%1003;
}
    int countWays(int n, string S){
m.clear();
   int c= parenthesis(S,0,n-1,true);
   return c;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        string S;
        cin>>S;
        
        Solution ob;
        cout<<ob.countWays(N, S)<<"\n";
    }
    return 0;
}
// } Driver Code Ends