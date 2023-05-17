#include<iostream>
#include<cstring>
using namespace std;
int main()
{

    // char *strtok(char *s.char *delimiters)
 //returns a token on each subsequent call
 //on the first call function should be passed with string arguement for 's'
    /*returns a character pointer,it accepts a character array (*s),it accepts a char of string about which you want to break the string*/
   //we want to break this string about spaces
    char s[100] ="Today, is a rainy ,day";
    char *ptr =strtok(s,",");
    cout<<ptr<<endl;
    while(ptr!=NULL){
    ptr =strtok(NULL,",");//ptr points to the first token s copied in a string
    cout<<ptr<<endl;
      }  return 0;
}