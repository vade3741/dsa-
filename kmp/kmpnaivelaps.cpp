#include<bits/stdc++.h>
#include<iostream>
#define int long long int
using namespace std;
void fillips(string x,int *lps){
    int n=x.size();
       int len=0;
       int i=1;
       lps[0]=0;
       while(i<n){
        if(x[i]==x[len]){
            len++;
            lps[i]=len;
            i++;   
        }
        else{
            if(len==0){
                lps[i]=0;
                i++;
            }
            else{
                len=lps[len-1];
            }
        }
       }    
}
void kmp(string x,string y){
    int n=x.size();
    int m=y.size();
    int lps[m];
    fillips(y,lps);
    int i=0;int j=0;
    while(i<n){
        if(x[i]==y[j]){
            i++;
            j++;
            if(j==m){
                cout<<n-m<<endl;
                j=lps[i-1];
            }

        }
        else if(i<n &&x[i]!=y[j]){
            if(j==0){
                i++;
            }
            else{
                j=lps[j-1];
            }
        }
    }
}
int32_t main()
{
int t;
cin>>t;
while(t--)
{
string x;
cin>>x;
string y;
cin>>y;
kmp(x,y);

}
return 0 ;
}