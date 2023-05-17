#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
//we can create and intialise vectors in these ways





    vector<int> a;        // vector is a class
    vector<int> b(5, 10); // creating a dynamic array with 5 elements each having the value of 10
    vector<int> c(n, 0);  // useful for initialising a dynamic array of n elements each having a value of zero
   
   //intialising one vector from another vector
   vector<int >d(b.begin(),b.end());
   vector<int> e{1,2,3,4,5};

   //how we can itearte over the vectors
   for (int  i = 0; i < d.size(); i++)
   {
    cout<<d[i]<<endl;
   }
   for(auto it=c.begin();it!=c.end();it ++){
    cout<<(*it)<<endl;
   }
   //dereferncing the auto keyword
   for(vector<int>::iterator it=e.begin();it!=e.end();it++){
    cout<<(*it)<<endl;
   }
   //for each loop
   for(auto x:e ){
    cout<<x<<",";
   }cout<<endl;
    return 0;
}