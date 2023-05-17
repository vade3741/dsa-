#include<iostream>
#include<set>
using namespace std;
typedef multiset<int>::iterator It;
int main()
{ int arr[]={10,20,30,10,10,10};
multiset<int >m(arr,arr+6);//if we have used set than 10 would have just appeared once but inmultiset there is no uniqueness in key
//iterate over map
for(auto x:m){
    cout<<x<<" ";
}//find an element and remove all its occurences
auto f=m.find(10);
cout<<(*f)<<endl;
m.erase(10);
for(auto x:m){
    cout<<x<<" ";
}//insert an element
m.insert(20);
for(auto x:m){
    cout<<x<<" ";
}//count
cout<<"count"<<m.count(20)<<endl;;
//get all elements which are equal to 10
pair<It,It> range=m.equal_range(10);
for(auto it =range.first;it!=range.second;it++){
    cout<<*it<<" -"<<endl;
}//lower bound and upper bound
// want to iterate over number s which are beyond 10 and less than 100
for(auto it =m.lower_bound(10);it!=m.upper_bound(100);it++){
    cout<<*it<<" -";
}
      return 0;
}