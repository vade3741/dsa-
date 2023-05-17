#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int >v;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        v.push_back(num);
        cout<<v.size()<<endl;
        cout<<"changing capacity"<<v.capacity()<<endl;

    }for(auto x:v){
        cout<<x<<endl;
    }
  /*this is not a correct approach although we are entering the number but as soon as we push the elements the memory gets doubled 
  as soon as we enter 1 element and if enough size is not present it will copy the whole array and double the size hence it is an expensive operation */
  

  v.reserve(1000);
    for(int i=0;i<n;i++){
      
        cout<<"changing capacity"<<v.capacity()<<endl;

    }for(auto x:v){
        cout<<x<<endl;
    }
  /*instead we are reserving some spaces in the memory until which no memory will get doubled and if we cross that limit 
  than memory will get doubled and all array elements will get copied 
  */
      return 0;
}