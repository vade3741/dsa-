#include<iostream>
#include<algorithm>
using namespace std;
int main()
{


    int arr[]={20,30,40,40,40,50,100,1100};
    int n= sizeof(arr)/sizeof(int);
    int key;
    cin>>key;
    bool present=binary_search(arr,arr+n,key);

    //returns true or false if key is present or not
    if(present){
        cout<<"present"<<endl;

    }else{
        cout<<"absent"<<endl;
    }

   
    //for getting index of the element where it is present
//lower_bound(start,end,key) and upper_bound(Start ,end,key) these functions returns address
auto it=lower_bound(arr,arr+n,key);
/*returns  element which is >=key*/
cout<<"Lower bound of "<<key<<" "<<(it-arr)<<endl;
/*returns elements which is strictly >key*/
auto it1=upper_bound(arr,arr+n,key);
cout<<"Upper bound of "<<key<<" "<<(it1-arr)<<endl;
// frequency of a element can be calculated as upper_bound -lower_bound in a sorted array
cout<<"Frequency of "<<key<<" "<<it1-it<<endl;

      return 0;
}