#include<iostream>
using namespace std;
int main()
{
    int a[]={1,2,3};
    int b[]={4,6,7};
    pair<int,int>p_array[3];
    p_array[0]={1,4};
    p_array[1]={2,6};
    p_array[2]={3,7};
    for(int i=0;i<3;i++){
        cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
    }swap(p_array[0],p_array[1]);
          for(int i=0;i<3;i++){
        cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
    }
    //taking input as first pair element
   pair<int ,string>p;
    cin>>p.first;
    cin>>p.second;
    
        cout<<p.first<<" "<<p.second<<endl;
 
      
      return 0;
}