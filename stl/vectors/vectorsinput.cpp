#include<iostream>
#include<vector>
using namespace std;
int main()
{
int n;
cin>>n;
vector<int> v;
vector<int > d{1,2,3,4,5};
for(int i=0;i<n;i++){
    int num;
    cin>>num;
    v.push_back(num);//adds an element to the end of the vector
} 
for(auto x:v){
 cout<<x;
}cout<<endl;
//differnces between input and user inpur
cout<<v.size()<<endl;//shows the size  or number of elements of the dynamic array
cout<<d.size()<<endl;
cout<<v.capacity()<<endl;//shows how much number can be added into the dynamic array
cout<<d.capacity()<<endl;
cout<<v.max_size()<<endl;//maximum number of elements a vector can hold in the worst case according to available memory
cout<<d.max_size()<<endl;

      return 0;
}