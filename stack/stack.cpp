#include<bits/stdc++.h>
#include<iostream>
#define int long long int
using namespace std;
void printstack(stack<int> &s){
    if(s.empty()){
        return;
    }
    int x= s.top();
    s.pop();
    printstack(s);
    cout<<x<<" ";
    s.push(x);
}
int32_t main()
{
stack<int> s;
s.push(10);
printstack(s);
cout<<"->"<<s.top()<<" "<<s.size()<<" ";
s.push(20);
printstack(s);
cout<<"->"<<s.top()<<" "<<s.size()<<" ";
s.push(30);
printstack(s);
cout<<"->"<<s.top()<<" "<<s.size()<<" ";
s.push(40);
printstack(s);
cout<<"->"<<s.top()<<" "<<s.size()<<" ";
s.pop();
printstack(s);
cout<<"->"<<s.top()<<" "<<s.size()<<" ";
s.pop();
printstack(s);
cout<<"->"<<s.top()<<" "<<s.size()<<" ";
s.pop();
printstack(s);
cout<<"->"<<s.top()<<" "<<s.size()<<" ";
s.pop();
printstack(s);
cout<<"->"<<" "<<s.size()<<" ";

return 0 ;
}