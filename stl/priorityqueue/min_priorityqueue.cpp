#include<iostream>
#include<queue>
using namespace std;
int main()
{
    //by default queue is based on max heap
    //to convert this priority queue into in min heap by passing inbuilt comparator greater int

    priority_queue<int,vector<int >,greater<int>> q;//min priority queue of q
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
int num;
cin>>num;
q.push(num);//time complexity of this operation is 0(N)
/*N--> denotes the number of elements present int he heap at that time

*/}
while(!q.empty()){
cout<<q.top()<<endl;
q.pop();

}
    
      return 0;
}