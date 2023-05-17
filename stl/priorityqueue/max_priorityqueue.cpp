#include<iostream>
#include<queue>
using namespace std;
int main()
{
    //by default queue is based on max heap

    priority_queue<int > q;
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