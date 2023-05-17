#include <bits/stdc++.h>
#include <iostream>
#define int long long int
using namespace std;
class Graph
{
    int V;
    list<int> *p;

public:
    Graph(int v)
    {
        this->V = v;
        p = new list<int>[V];
    }
    void addedge(int x, int y)
    {
        p[x].push_back(y);
        p[y].push_back(x);
    }
    void printgraph(){
        for(int i=0;i<V;i++){
            cout<<i<<"->";
            for(auto x:p[i]){
               cout<<x<<" ";
            }
            cout<<endl;
        }
    }
};

int32_t main()
{
    Graph g(4);
    g.addedge(0,1);
    g.addedge(0,2);
    g.addedge(2,3);
    g.addedge(1,2);
    g.printgraph();

    return 0;
}