// Given weights and values of N items, 
// put these items in a knapsack of capacity W to get
//  the maximum total value in the knapsack.
//   In other words, given two integer arrays val[0..N-1] and wt[0..N-1] 
//   which represent values and weights associated with 
//   N items respectively. 
//   Also given an integer W which represents
//    knapsack capacity, find out the maximum value 
//    subset of val[] such that the sum of the weights
//     of this subset is smaller than or equal to W.
//  You cannot break an item, 
//  either pick the complete item or don’t pick 
//  it (0-1 property)
#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int profit(int *weights,int *price,int n,int capacity){
    if(n==0||capacity==0){
        return 0;
    }
    int ans=0;
    int inc=0;
    int exc=0;
    if(capacity>=weights[n-1]){
         inc=price[n-1]+ profit(weights,price,n-1,capacity-weights[n-1]);

    }
         exc= profit(weights,price,n-1,capacity);
ans=max(inc,exc);
return ans;
}
int main()
{ 
    int val[] = { 60, 100, 120 };
    int wt[] = { 10, 20, 30 };
    int W = 50;
    int n = sizeof(val) / sizeof(val[0]);
    cout << profit(wt, val,n , W);
      return 0;
}