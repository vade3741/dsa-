// Q. count number of binary trees with n given nodes
// ans--> it is equivalent of no of bst but you can arrange each bst in n! ways ,
// so n!*catalan number 
#include<iostream>
using namespace std;
int factorial(int n){
  if(n==0){
    return 1;
  }else{
    return n*factorial(n-1);
}
}
unsigned long int catalan(unsigned int n){
    if(n<=1){
        return 1;

    }
    unsigned long int res=0;
    for(int i=0;i<n;i++){
        res+= catalan(i)*catalan(n-i-1);
    }return res;
}
int main()
{int n;
cin>>n;
cout<<factorial(n)*catalan(n)<<endl;

      return 0;
}