#include<bits/stdc++.h>
#include<iostream>
#define int long long int
using namespace std;
int lcp(string x){
int lps[x.length()];
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
return lps[x.length()];
}
int32_t main()
{
int t;
cin>>t;
while(t--)
{
string x;
cin>>x;
string c=x;
reverse(x.begin(),x.end());
string t=c+'$'+x;
cout<<x.length()-lcp(t)<<endl;
}
return 0 ;
}