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

  cout<<endl;
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

    //to remove all occurences of a particular data
    
    //removed a particular strng
    l2.remove("gauva");
            for(auto s:l2){
        cout<<s<<"-->";
        }
    cout<<endl;
    l2.push_back("kiwi");

    //removed all occurences of single string
    l2.remove("kiwi");
              for(auto s:l2){
        cout<<s<<"-->";
        }
    cout<<endl;
    //user input removal
    string f;
    cin>>f;
    l2.remove (f);
              for(auto s:l2){
        cout<<s<<"-->";
        }
    cout<<endl;
    //we can insert element at the middle
    auto it=l2.begin();
    it++;
    l2.insert(it,"chikko");
    
    l2.insert(it,"kiwi");
              for(auto s:l2){
        cout<<s<<"-->";
        }
    cout<<endl;
    //we can erase a element at particular index using iterator we cannot direct access the list henece we are using iterators to access it

    it++;
    it++;
    it++;
    l2.erase(it);
              for(auto s:l2){
        cout<<s<<"-->";
        }
    cout<<endl;
      return 0;
}