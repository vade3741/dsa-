#include<iostream>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
int main()
{ typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update>
 new_data_set;
 
 int n;
 cin>>n;
 int a[n];
 new_data_set st;
for(int i=0;i<n;i++){
cin>>a[i];
}for(int i=0;i<n;i++){
      st.order_of_key(a[i]);
      st.insert(a[i]);
}  

      return 0;
}