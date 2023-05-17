#include<iostream>
#include<bits/stdc++.h>

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef tree<pair<int,int>,null_type,less<pair<int,int>>,rb_tree_tag,tree_order_statistics_node_update>
 new_data_set;
int main()
{
      //if we want to insert multiple dupicate elements we can make pair with index and do that
    new_data_set st;
    st.insert({4,0});
    st.insert({10,1});
    st.insert({432,2});
    st.insert({3,3});
    st.insert({3,4});//we have inseted 3 by two times but there is no change in data structures cause it works as a set and take only unique values
    st.insert({15,5});
  for(int i=0;i<st.size();i++){
cout<<i<<" "<<st.find_by_order(i)->first<<" "<<st.find_by_order(i)->second<<endl;
  }//find_by_order tells kth largest element at till mow in (logn) time complexity
      
//order_of_key tells hpw many elements are strictly lesser than the key
      



      return 0;
}