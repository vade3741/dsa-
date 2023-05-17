#include <iostream>
#include <algorithm>
using namespace std;
int main()
{ // search algoritm
    int arr[] = {1, 10, 11, 9, 100};
    int n = sizeof(arr) / sizeof(int);
    int key ;
    cin>>key;

auto it=find(arr,arr+n,key);
    
cout<<it<<endl;/*returns an address where it points 
thus for getting an index of key we will subtract base address from it to get number of boxes betwwen it or its index */
   int index=it-arr;
   cout<<index<<endl; 
    /*if element is not present in array it will return n*/
if(index==n){
    cout<<key<<" not present"<<endl;
}else{
    cout<<key<<" is present  at index  "<<  index <<endl;
}
    return 0;
}