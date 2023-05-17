#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define int long long int

int binmul(int a,int b,int M){
    int ans=0;
    while(b){
    if(b&1){
ans=(ans+a)%M;
    }
    a=(2*a)%M;
    b=b>>1;
    }
    return ans;
}
int modular_exponentiation(int a,int b,int M){
    // if a and m has large values 
    a=a%M; 
   
    int ans=1;
    while(b){
    if(b&1){
ans=(binmul(ans,a,M))%M;
    }
    b=b>>1;
    a= binmul(a,a,M)%M;

    }
    return ans;
}

bool miler_rabin(int n){
    if(n==1){
        return false;
    }
    if(n==2){
        return true;
    }if(n%2==0){
        return false;
    }// n is odd so n-1 is even 
    //expression n-1 in terms of a odd number and with 2 ^s
    int d=n-1,s=0;
    while(d%2==0){
        s++;
        d/=2;
    }//n-1=d*pow(2,s)
    //d is an odd number
    //by picking a random number n from first 9 prime numbers we can achieve accuracy of 3*10^18
    vector<int>v({2,3,5,7,11,13,17,19,23});
    //a represent as random numbers
    for(int i=0;i<v.size();i++){
        if(v[i]>n-2){
            //if number skips the range as number would lie in 2  to n-2 range
            //but if we pick random number not in this range then pick another random number
            continue;
        }
        int ad=modular_exponentiation(v[i],d,n);
        if(ad%n==1){
            continue;
        }bool prime=false;
        for(int r=0;r<=s-1;r++){
            int rr=modular_exponentiation(2,r,n);
            int adr =modular_exponentiation(ad,rr,n);
            if(adr%n==n-1){
            prime =true;
            break;
            }

        }
        if(prime==false){
            return false;
        }
    }
    return true;
}
int32_t main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
    // int n;
    // cin>>n;
    if(miler_rabin(i)){
        cout<<"PRIME"<<" "<<i<<" ";
    }else{
        cout<<"NOT PRIME"<<" ";
    }
    cout<<endl;
    }

      return 0;
}