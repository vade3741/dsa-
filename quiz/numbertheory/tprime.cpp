#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int arr[1000006]={0};
bool isprime(int n){
    if(n==1){
        return false;
    }
    if(n==2){
        return true;
    }
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
bool is_prime(int n){
    if(n==1){
        return false;
    }
    if(n==2){
        return true;
    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
void isprime_sieve(int *arr,int n){
for(int i=3;i<=n;i+=2){
arr[i]=1;
}
for(int i=3;i<=n;i+=2){
    if(arr[i]==1){
for(int j=2*i;j<=n;j+=i){
    arr[j]=0;
}
}
}
arr[2]=1;
arr[1]=arr[0]=0;

}

int main()
{


int n;
cin>>n;

// bool check=is_prime(n);
// if(check){
//     cout<<n<<" "<<"is prime"<<endl;
// }else{
//     cout<<"It is not prime"<<endl;
// }
isprime_sieve(arr,1000006);
for(int j=0;j<=n;j++){
if(arr[j]==1){
    cout<<j<<endl;
}
}
        return 0;
}