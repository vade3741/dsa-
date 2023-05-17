#include<iostream>

using namespace std;
class student{
    private :
    string name;
    int age;
    public:
    void setstudent(string s,int a){
        name=s;
        age=a;
    }
    void showstudent(){
        cout<<name<<endl;
        cout<<age<<endl;
    }
};
int main()
{
    pair <int ,int> p1;
    pair<string,int>p2;/*string is a predefined class in c++ and we are pairing it with int hence we can 
    pair user defined and pre defined class*/
    
    pair<int,student> p3;//paired pre defined and a user defined class


    //inserting a data into the pair
    p1=make_pair(15,12);
    p2=make_pair("shyam",12);
    student s1;
    s1.setstudent("rahul",17);
    p3=make_pair(1,s1);   


    //accessing pair members 
    cout<<"pair 1"<<endl;
    cout<<p1.first<<" "<<p1.second<<endl;
    cout<<"pair 2"<<endl;
    cout<<p2.first<<" "<<p2.second<<endl;
    cout<<"pair 3"<<endl;
    cout<<p3.first<<endl;
    student s2=p3.second;
    p3.second.showstudent();


      return 0;
}