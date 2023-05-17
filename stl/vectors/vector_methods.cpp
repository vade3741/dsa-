#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> d{1,2,3,4,5,6};
    d.push_back(78);
    for(auto x:d){
        //push back has the time complexity of 0(1) but it can vary on expansion of memory
          cout<<x<<endl;
    }d.pop_back();
     for(auto x:d){
//pops the last element of the vector of 0(1) time complexity
          cout<<x<<endl;
    }//for insertion of element in the middle 
    d.insert(d.begin()+3,100);
       for(auto x:d){

          cout<<x<<endl;
    }
    //for insertion of multiple elements in the middle of same value
    d.insert(d.begin()+4,4,45);
        for(auto x:d){
//it has  the time complexity of 0(N) N-->denotes number of elements that to be shifted + that to be added
          cout<<x<<endl;
    }
    //erasing some element in the middle
    d.erase(d.begin()+3);
      for(auto x:d){

          cout<<x<<endl;
    }//we can erase a range of elements from the middle
    d.erase(d.begin()+3,d.begin()+7);
  for(auto x:d){

          cout<<x<<endl;
    }
    cout<<d.size()<<endl;
    cout<<d.capacity()<<endl;/*the capacity is still double the size cause we added some element
     and poped some but vector doesnot shrink even when we pop elements */


/*this function cannot shrink the underlying array but can increase the size and capacity if we want to reach at particular size in 
increasing order*/
     d.resize(18);
     cout<<d.size()<<endl;
     cout<<d.capacity()<<endl;

     //remove all the elements of the vector,but doesnot delete the memory of occupied by the vector
d.clear();
  for(auto x:d){

          cout<<x<<endl;
    }
    cout<<d.size()<<endl;

    //to check whether the vector is empty or not
    if(d.empty()){
        cout<<"vector is empty"<<endl;
    }else{
        cout<<"Vector is not empty"<<endl;
    }
    //inserting some element and printing front element
    d.push_back(18);
    d.push_back(12);
    d.push_back(11);
    d.push_back(19);

    //printing frontmost element
    cout<<d.front()<<endl;
    //printing lastmost element
    cout<<d.back()<<endl;
    
      return 0;
}