#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    while (n > 0)
    {
        int c = n % 10;

        v.push_back(c);
        n = n / 10;
    }
    int sum=0;
   sum= (1<<v.size())-2;
for(auto i=0;i<v.size();i++){
    if(v[i]==7){
        sum+=1<<i;
    }
}cout<<sum+1<<endl;
    return 0;
}