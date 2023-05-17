#include<iostream>
#include<bits/stdc++.h>
using namespace std;

const int n=1000000;
int arr[1000000]={0};

void prime_sieve(){
for(long long int i=3;i<=n;i+=2){
arr[i]=1;
}


for(long long int i=3;i<=n;i+=2){
    if(arr[i]==1){
        
        for(long long int j=2*i;j<=n;j+=i){
            arr[j]=0;
        }
    }
    
}
arr[2]=1;
}bool perfect_square(long long int n)
{
double a= sqrt(n);
int b = sqrt(n);
if (b==a)
{
return 1;
}
else
return 0;

}




int32_t main()
{
    prime_sieve();
    int n;
    cin>>n;

    int j=0;
    for(long long int i=0;i<n;i++){
long long int m;
cin>>m;
    if(perfect_square(m)==1&&arr[int(sqrt(m))]==1){
        
            cout<<"YES"<<endl;
        
      
    }
      else{
            cout<<"NO"<<endl;
        }
    }
   
    
      return 0;
}