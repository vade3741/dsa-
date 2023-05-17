#include<iostream>
#include<bits/stdc++.h>
using namespace std;
/*
finding sunsequences/subsets of a given a string 
Input-"AbC"
output -" ",a ,ab,abc,b,bc,c,ac

*/
int filterchars(int n,int a[]){
    int ans;
    ans=999;//999=n
    int j=0;
    int k=0;
   
    while(n>0){
        int last_bit=(n&1);
        if(last_bit==1){
           // cout<<a[j];
            ans=ans/a[j];
            k++;
        }
   j++;
   n=n>>1; 
    }if(k%2==0){
        ans=-ans;
    }
    
  
    return ans;
}
vector<int> printsubsets(int a[],int n){
   // int n=strlen(a);
     vector<int> v;
    for(int i=0;i<(1<<n);i++){
int ans=filterchars(i,a);
    v.push_back(ans);

    }
    return v;
}
int main()
{ 
    int n;
    cin>>n;
  int a[n] ;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        
    }
    // char a[100];

// cin>>a;
vector<int > p=printsubsets(a,n);
int sum=0;
for(auto it=p.begin()+1;it!=p.end();it++){
   sum=sum+(*it);
}cout<<sum<<endl;

      return 0;
}