#include<iostream>
#include<vector>
using namespace std;


void printvec(vector<int> v){//in this we are passing the vector as a copy
        cout<<v.size()<<endl;
    for (auto x:v){
        cout<<x<<",";
    }v.push_back(19);//this function affect the vector in the function not in the main cause vector is recieved as a copy
    cout<<endl;
}
int main()
{
    vector<int > v;
    v.push_back(18);
    v.push_back(12);
    v.push_back(15);
    printvec(v);
    v.pop_back();
    printvec(v);
    vector<int>v2=v;//vector speciality:
    /*vector can be copied easily but array cannot be copied we can make their pointer equal even then if we change something in one 
    array other get affected but not the case in vector vector creates a copy*/
    v2.push_back(12);
    //copying of vector is an expensive operation of 0(n) time complexity
    printvec(v2);
      return 0;
}