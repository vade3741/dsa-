#include<iostream>
#include<map>
#include<string>
using namespace std;

int main(){

map<int ,string>m;
m.insert(make_pair(100,"gajendra"));
m.insert(make_pair(123,"Dilip"));
m.insert(make_pair(145,"Aditya"));
m.insert(make_pair(171,"Shahid"));
m.insert(make_pair(200,"Rajesh"));
for(auto x:m){
    cout<<x.first<<" "<<x.second<<" "<<endl;
}
cout<<m.at(100)<<endl;
cout<<m.size()<<endl;
if(m.empty()){
    cout<<"maps is empty"<<endl;
}else{
    cout<<"map is not empty"<<endl;
}

return 0;
}