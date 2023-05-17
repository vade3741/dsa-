#include<iostream>
using namespace std;

bool isodd(int n){
    return(n&1);
}
int getbit(int n,int i){
    int mask=1<<i;
    int bit =(n&mask)>0?1:0;
      return bit;
}
int setbit(int n,int i){
    int mask=1<<i;
    int bit =(n|mask);
      return bit;
}void clearbit(int &n,int i){
  int mask=~(1<<i);
  int bit =n&mask;
  
}void updatebit(int &n,int i,int v){
  clearbit(n,i);
  int mask=(v<<i);
   n =(n|mask);
}
int clearlastbit(int n,int i,int j){
  int mask =j<<i;
  n=n&mask;
  return n;
}int clearrangeitoj(int n,int i,int j){
  int maska=((~0)<<j+1);
  int maskb =((1<<i)-1);
  int maskt=(maska|maskb);
  int ans=n&maskt;
  return ans;

}
int main(){
int n=5;
int i;
cin>>i;
cout<<getbit(n,i);
cout<<setbit(n,i);
// clearbit(n,i);
// cout<<n<<endl;
updatebit(n,i,1);
cout<<n<<endl;
// cout<<clearlastbit(n,i,(~0));
cout<<clearlastbit(n,i,-1);
cout<<clearrangeitoj(n,2,i);

return 0;
}