#include <iostream>
#include <queue>
#include <cstring>
using namespace std;

class person
{
public:
    string name;
    int age;

    person()
    {
    }
    person(string n, int a)
    {
        age = a;
        name = n;
    }
};
class personcompare
{
public:
    bool operator()(person A, person B)
    {
        return A.age < B.age;
    }
};
int main()
{
    int n;
    cin >> n;

    priority_queue<person, vector<person>, personcompare> q;
    for (int i = 0; i < n; i++)
    {
        string name;
        int age;
        cin >> name >> age;
        person p(name, age);
        q.push(p);
    }
        int k = 3;
        //we are counting top 3 string in old age comparision 
        for (int i = 0; i < k; i++)
        {
            person p = q.top();
            cout << p.name << " " << p.age << endl;
            q.pop();
        }
    

    return 0;
}