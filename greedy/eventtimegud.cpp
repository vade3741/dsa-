#include <bits/stdc++.h>
#include <iostream>
#define int long long int
using namespace std;

int maxEvents(vector<vector<int>> &events)
{
    // sort(events.begin(), events.end());
    priority_queue<vector<int>,vector<vector<int>>,greater<vector<int>>>pq;
         int maxi=INT_MIN;
    for(int i=0;i<events.size();i++){
        pq.push(events[i]);
        maxi=max(maxi,events[i][1]);
    }

int count=0;

for(int i=1;i<=maxi;i++){

if(pq.empty()!=0){
    return count;
}
vector<int> tem=pq.top();
if(i==tem[0]){
pq.pop();
count++;
}
else if(i<tem[0]){
continue;
}
else{
    while(i>pq.top()[0]){
    vector<int> m=pq.top();
    pq.pop();
    if(m[1]<i){
        pq.push(m);
        pq.pop();
    }
    else{
    m[0]=i;
    pq.push(m);
    
   
    }
    }
 pq.pop();
count++;
}

}
return count;
}
int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<vector<int>> v;

        for (int i = 0; i < n; i++)
        {
            int p, q;
            cin >> p >> q;
            vector<int> v2;
            v2.push_back(p);
            v2.push_back(q);
            v.push_back(v2);
        }

        cout<<maxEvents(v)<<endl;
            }
    return 0;
}