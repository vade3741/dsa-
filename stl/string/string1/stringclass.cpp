#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s0;
    string s1("Hello!");
    string s2 = "Hello World!";
    string s3(s2);
    string s4 = s3;
    char a[] = {'a', 'b', 'c', '\0'};
    string s5(a);
    cout << s0 << endl;
    cout << s1 << endl;
    cout << s2 << endl;
    cout << s3 << endl;
    cout << s4 << endl;
    cout << s5 << endl;

    if (s0.empty())
    {
        cout << "s0 is an empty string" << endl;//for finding whether the string is empty or not
    }
    
        s0.append("I love c++");
        cout << s0 << endl;//add anither string into one

       s0+=" and python";
        cout << s0 << endl;//another way to append

        //Remove
        cout<<s0.length()<<endl;
        s0.clear();//Remove the whole string
        cout<<s0.length()<<endl;
 //Compare two strings
 s0="Apple";
 s1="Mango";
 cout<<s0.compare(s1)<<endl;//according to dictionary mango is greater than apple thus it returns -1
 cout<<s1.compare(s0)<<endl;

//using overloading operators
 if(s1>s0){
    cout<<"mango is greater than apple"<<endl;
 }//accessing by index
 cout<<s1[2]<<endl;
 //Find Substring
 string s="I want to have apple juice";
 int idx =s.find("apple");
 cout<<idx<<endl;
 //removing a word from a string
 string word ="apple";
 int len =word.length();
 cout<<s<<endl;
 s.erase(idx,len);
cout<<s<<endl;
    return 0;
}