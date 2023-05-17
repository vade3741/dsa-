#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<int> q;
for(int i=0;i<5;i++){
q.push(i);
cout<<q.back()<<endl;
}cout<<endl;
while(!q.empty()){
    cout<<q.front()<<endl;//front take care of poping
    q.pop();
}

      return 0;
}