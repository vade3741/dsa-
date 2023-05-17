#include<iostream>
using namespace std;
long long int friends(int n){
    if(n==0||n==1){
        return 1;
    }
    return friends(n-1)+(n-1)*friends(n-2);
}
int main()

{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<friends(n)<<endl;
    }

      return 0;
}