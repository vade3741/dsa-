#include<iostream>
#include<unordered_map>
#include<string>



using namespace std;
int main(){

unordered_map<string,int> m;
//insertion of key value pair in a map
m.insert(make_pair("maggi",23));

//another way to insert key value pair in a map
pair<string,int> p;
p.first="Apple";
p.second=120;
m.insert(p);

//3 way to insert is 
m["banana"]=45;

//searching or query in a map
string key;
cin>>key;

auto it=m.find(key);
//iterators returns an integer
if(it!=m.end()){
    cout<<"price of"<<" "<<key<<" "<<m[key]<<endl;
}else{
    cout<<"fruit is not present"<<endl;
}
//another way to search 
//since maps stores only unique keys hece we can count the keys and look for value
if(m.count(key)) {
cout<<"price is "<< key << m[key]<<endl;
}else{
    cout<<"fruit is not present"<<endl;
}
//returns 0 or 1 1 if key is present 0 if not present


//erasing a key value pair
m.erase(key);
if(m.count(key)) {
cout<<"price is "<< key << m[key]<<endl;
}else{
    cout<<"fruit is not present"<<endl;
}
//updation of the value in a map
m["banana"]=74;
m[key]+=22;
if(m.count(key)) {
cout<<"price is "<< key << m[key]<<endl;
}else{
    cout<<"fruit is not present"<<endl;
}


//itrate over all the key value pair
m["lichi"]=20;
m["pineapple"]=23;
for(auto it=m.begin();it!=m.end();it++ ){
    cout<<(*it).first<<" "<<(*it).second<<endl;
}
for(auto x:m){
    cout<<x.first<<" "<<x.second<<endl;
}

return 0;
}