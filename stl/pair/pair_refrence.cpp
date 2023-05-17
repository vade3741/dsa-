#include<iostream>
using namespace std;
int main()
{ pair<int ,string>p;
p={2,"abcd"};
cout<<p.first<<" "<<p.second<<endl;

//we are creating the copy of pair so change in p2 will not affect p

pair<int,string> &p2=p;
p2.first=3;
p2.second="xuz";
cout<<p2.first<<" "<<p2.second<<endl;
cout<<p.first<<" "<<p.second<<endl;
      return 0;
}