#include<iostream>
#include<bits/stdc++.h>

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update>
 new_data_set;
int main()
{

    new_data_set st;
    st.insert(4);
    st.insert(1);
    st.insert(10);
    st.insert(3);
    st.insert(3);//we have inseted 3 by two times but there is no change in data structures cause it works as a set and take only unique values
    st.insert(15);
  for(int i=0;i<st.size();i++){
cout<<i<<" "<<*st.find_by_order(i)<<endl;
  }//find_by_order tells kth largest element at till mow in (logn) time complexity
      
        for(int i=0;i<st.size();i++){
cout<<st.order_of_key(i)<<endl;
  }//order_of_key tells hpw many elements are strictly lesser than the key
      


      
      return 0;
}