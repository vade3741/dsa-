#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//naive approach
// bool is_prime(int n){
// if(n==1){
//     return false;
// }
// if(n==2){
//     return true;
// }
// for(int i=2;i<n;i++){
//     if(n%i==0){
//         return false;
//     }
//     return true;
// }
// //naive approach of o(n) time complexity

// }
bool is_prime(int n){
if(n==1){
    return false;
}
if(n==2){
    return true;
}
for(int i=2;i*i<n;i++){
    if(n%i==0){
        return false;
    }
    return true;
}
//naive approach of o(sqrtn) time complexity

}
int main()
{

      return 0;
}