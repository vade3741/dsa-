#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int >l;
    //intialising the list
    list<int >l1={1,2,3,4,5,10,8,5};
    //intialising the list from different datatypes
    list<string>l2={"apple","banana","gauva","papita"};
   for(auto s:l2){
        cout<<s<<",";
    }cout<<endl;
   
   
    //inserting a node at the back of the list
    l2.push_back("chikko");
    //iterating over the list 
    for(string s:l2){//defrencing the auto keywprd
        cout<<s<<"-->";
    }cout<<endl;

    for(auto it=l2.begin();it!=l2.end();it++){
        cout<<(*it)<<"-->";
    }cout<<endl;
        //methods
        //for sorting we use sort function that is inside the list
        l2.sort();
        for(auto s:l2){
        cout<<s<<"-->";
        }cout<<endl;
        //for sorting in reverse order or descending order
        l2.reverse();
         for(auto s:l2){
        cout<<s<<"-->";
        }
    cout<<endl;
//want to remove first element of the list

cout<<l2.front()<<endl;//to see what is the first element
l2.pop_front();
         for(auto s:l2){
        cout<<s<<"-->";
        }
    cout<<endl;
    //want to add element at the front and then see the element at the back and remove it
    l2.push_front("kiwi");
           for(auto s:l2){
        cout<<s<<"-->";
        }
    cout<<endl;
    cout<<l2.back()<<endl;
    l2.pop_back();
           for(auto s:l2){
        cout<<s<<"-->";
        }
    cout<<endl;
      return 0;
}