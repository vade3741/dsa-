#include<iostream>
#include<unordered_map>
using namespace std;

class student{
    public: 
    string firstname;
    string lastname;
    string rollnumber;
    student(string f,string l,string r){
        firstname=f;
        lastname=l;
        rollnumber=r;
    }
    bool operator==(const student &s)const{
      return rollnumber==s.rollnumber?true:false;
    }
};
class Hashfn{
public:
//size_t ->> unsigned long long int used to represent memory in bytes
size_t operator()(const student &s)const{
 return    s.firstname.length()+s.lastname.length();
}
};
int main()
{
unordered_map<student,int,Hashfn>student_map;
 student s1("Prateek","Narang","010");
 student s2("Rahul","Kumar","032");
 student s3("Prateek","Gupta","030");
 student s4("Rahul","kumar","088");
//add student and their marks to hashmap
student_map[s1]=100;
student_map[s2]=80;
student_map[s3]=70;
student_map[s4]=60;
//iterate over all student
for(auto s:student_map){
    cout<<s.first.firstname<<" "<<s.first.rollnumber<<" Marks"<<s.second<<endl;
}//find the marks of student s3
cout<<student_map[s3];
      return 0;
}