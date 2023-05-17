#include<iostream>
#include<set>
using namespace std;
int main()
{
    int arr[]={10,20,11,9,8,11,10};
    int n=sizeof(arr)/sizeof(int);

    set<int> s;
    for(int i=0;i<n;i++){
        s.insert(arr[i]);
    }
    for(auto x:s){
        cout<<x<<endl;
    }
    s.erase(10);
      for(auto x:s){
        cout<<x<<endl;
    }//find a element and erase it
    auto f=s.find(11);
    cout<<"found"<<(*f)<<endl;
    s.erase(f);
        for(auto x:s){
        cout<<x<<endl;
    }

      return 0;
}