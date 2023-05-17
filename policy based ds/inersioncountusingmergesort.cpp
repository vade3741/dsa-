#include<iostream>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
int main()
{

    //inversion count
    //a[i]>a[j] for all j>i
    //so all elements which are in the left of j needs to be checked

    // 1 5 2 3 6 4 10 so inverison pair will be 
    /* 5->2,5->3,5->4,6>4,

    so for 1 5 2 3 6 4 10
we have    0 0 1 1 0 2  0
so total inversion pair is 4    
    */
//    now logic
/*
order_key returns how many elements are lesser than the  element
but we need how many elements are greter than the element in the array
since array is sorted thus we can subtract order_key from the total size to get 
greater elements
*/
    
    typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update>
 new_data_set;

 //for all elemets to be distinct if array contains duplicate elements then we need to insert them in pair

  int n;
  cin>>n;
  int a[n];
 
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  new_data_set st;
  int inversion_count =0;
  //iterating iver the whole set
  for(int i=0;i<n;i++){
inversion_count+=st.size()-st.order_of_key(a[i]);
  //we are finding element greater than a[i]
  st.insert(a[i]);
  //inserting the greater element in the set
  }cout<<inversion_count;
      return 0;
}