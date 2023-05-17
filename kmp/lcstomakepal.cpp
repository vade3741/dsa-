//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
vector<int> lcp(string x){
vector<int> lps(x.length());
int len =0;
int i=1;
lps[0]=0;
while(i<x.length()){
if(x[i]==x[len]){
    len++;
    i++;
    lps[i]=len;

}
else{
    if(len!=0){
        len=lps[len-1];
    }
    else{
        lps[i]=0;
        i++;
    }
}
}
return lps;
}
    int addMinChar(string s){    
      
string c=s;
reverse(c.begin(),c.end());
string t=s+'$'+c;
vector<int> v=lcp(t);
return s.length()-v.back();
    }
};

//{ Driver Code Starts.


int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin >> str;
        
        Solution ob;
        cout << ob.addMinChar(str) << endl;
    }
    return 0; 
} 
// } Driver Code Ends