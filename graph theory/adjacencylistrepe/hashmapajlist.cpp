#include <bits/stdc++.h>
#include <iostream>
#define int long long int
using namespace std;
class Graph
{
    int V;
    unordered_map<string,list<pair<string,int>>> p;

public:

    void addedge(string x, string y,bool bidir,int weight)
    {
        p[x].push_back(make_pair(y,weight));
        if(bidir){

        p[y].push_back(make_pair(x,weight));
        }
    }
    void printgraph(){
        for(auto x:p){
            cout<<x.first<<"->";
            for(auto y:x.second){
               cout<<y.first<<" "<<y.second;
            }
            cout<<endl;
        }
    }
};

int32_t main()
{
     Graph g;
    g.addedge("A","B",true,20);
    g.addedge("B","D",true,40);
    g.addedge("A","C",true,10);
    g.addedge("C","D",true,40);
    g.addedge("A","D",false,50);
g.printgraph();
    return 0;
}