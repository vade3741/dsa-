#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
{
    multimap<char,string> m;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        char ch;
        string s;
        cin>>ch;
        cin>>s;
        m.insert(make_pair(ch,s));
    }
    //printing the whole map
    for(auto x:m){
        cout<<x.first<<"--> "<<x.second<<endl;
    }//inserting multiplr key with same value but they are not getting overwritten
    

    //erasing first value from multimap
    auto it=m.begin();
//   we can iteration and erase elements using iteration using indirect iterator access
    m.erase(it); for(auto x:m){
        cout<<x.first<<"--> "<<x.second<<endl;
    }

    //for iterating in map in betwwen the map from certain lower bound of element to upper bound of certain element
     
     //iterating from batman to dog
     /* sample input: 
     
     7 
     a apple 
     b bataman 
     b boat 
     c cat 
     a angry 
     d dog 
     e elephant
     
     
     
     */
     
     auto it2=m.lower_bound('b');
     auto it3=m.upper_bound('d');
for(auto it4=it2;it4!=it3;it4++){
    cout<<(*it4).first<<" "<<(*it4).second<<endl;
}
     //search for particular key and delete it
     char key;
      cin>>key;
     auto f= m.find(key);
    cout<<(*f).second<<endl;
    if(f->second=="cat"){
        m.erase(f);
    }//if c is multimapped we can iterate and find which c key correspond to cat key  
     for(auto x:m){
        cout<<x.first<<"--> "<<x.second<<endl;
    }
      return 0;
}