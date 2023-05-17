#include<iostream>
#include<bits/stdc++.h>
using namespace std;
const int N =100000;
vector<int>primes;
int p[N]={0};
void seieve(){
    for(int i =2;i<=N;i++){
        if(p[i]==0){
            primes.push_back(i);
            //storing i in the primes vector
            for(int j=i*i;j<=N;j+=i){
                p[j]==1;//marksing multiples as not prime vector
            }
        }
    }
}
int main()
{
    seieve();//build this seieve inly ince for all testcases
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,m;
        cin>>m>>n;
        bool segment[n-m+1]={0};
        for(auto x:primes){
            int start=(m/x)*x;
            
            if(x*x>n){
                break;
            }
            if(x>=m&&x<=n){
                start=2*x;
            }
            for(int k=start;k<=n;k+=x){
                segment[k-m]=1;
            }
        }
        for(int i=m;i<=n;i++){
            if(segment[i-m]==0&&i!=1){
                cout<<i<<endl;
            }
        }
    }
      return 0;
}