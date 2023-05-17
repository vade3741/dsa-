#include<iostream>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
int main()
{
       typedef tree<pair<int,int>,null_type,less<pair<int,int>>,rb_tree_tag,tree_order_statistics_node_update>
 new_data_set;
    //given(i<j) and we need to find ai+aj>bi +bj;
    //a[i]-b[i]>a[j]-b[j]
    //c[i]>-c[j]

int n;
cin>>n;
int a[n];//intresting topics for teacher
int b[n];
int c[n];


 
for(int i=0;i<n;i++){
    cin>>a[i];
}
for(int i=0;i<n;i++){
    cin>>b[i];
}for(int i=0;i<n;i++){
    c[i]=a[i]-b[i];
}  new_data_set st;
long long int inversion_count =0;

for(int i=0;i<n;i++){
    inversion_count+=st.size()-st.order_of_key({-c[i],100000});
    st.insert({c[i],i});
}cout<<inversion_count;



      return 0;
}


