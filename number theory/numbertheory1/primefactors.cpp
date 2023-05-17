#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// void primefactors(int n)
// {
//     map<int, int> factors;
//     int count; 
//     for (int i = 2; i <= n; i++)
//     {
//     count= 0;
//         while (n % i == 0)
//         {
//             count++;
//             n = n / i;
        
//         }factors.insert(make_pair(i,count));
//     }
//     for(auto x:factors){
//         cout<<x.first<<" "<<x.second<<endl ;
//     }
// }//naive opproach it is of o(n) time complexity

void primefactors(int n)
{
    map<int, int> factors;
    int count; 
    for (int i = 2; i*i <= n; i++)
    {
    count= 0;
        while (n % i == 0)
        {
            count++;
            n = n / i;
        
        }factors.insert(make_pair(i,count));
    }
    if(n!=1){
        factors.insert(make_pair(n,1));
    }
    for(auto x:factors){
        cout<<x.first<<" "<<x.second<<endl ;
    }
}
int main()
{
    primefactors(24);
    return 0;
}