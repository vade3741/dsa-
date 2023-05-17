#include <iostream>

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
int main()
{
    // Declaration of a tree based contianer
    template <
        typename Key, // this key can be of any type int float vector container or what we want our data structure to store
        // Mapped -policy
        typename Mapped,
        // key comparision functor(comparator)
        typename Cmp_Fn = std::less<key>,
        // how do we want  to compare the key

        // specifies which underlying data structures to use
        typename Tag = rb_tree_tag,
        template <
            typename Const_Node_Iterator,
            typename Node_Iterator,
            typename Cmp_Fn_,
    typename Allocator_,
    class Node_update = null_node_update,
          typename Allocator = std::allocator<char> >
                               class tree;

typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update>
 new_data_set;
    return 0;
}