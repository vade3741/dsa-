#include <bits/stdc++.h>
#include <iostream>
#define int long long int
using namespace std;
template<typename T>
class Graph
{
    

    unordered_map<T,list<T>> p;

public:

    void addedge(T x, T y)
    {
        p[x].push_back(y);
        p[y].push_back(x);
        

        
    }
    void bfs(T src){
 queue<T> q;
 unordered_map<T,bool> visited;
 q.push(src);
 visited[src]=true;
 while(!q.empty()){
    T front=q.front();
    q.pop();
    cout<<front<<" ";
    for(auto x:p[front]){
        if(visited[x]==false){
q.push(x);
 visited[x]=true;
        }
    }
 }

    }
    void printgraph(){
        for(auto x:p){
            cout<<x.first<<"->";
            for(auto y:x.second){
               cout<<y<<" ";
            }
            cout<<endl;
        }
    }
};

int32_t main()
{
     Graph<int> g;

    g.addedge(0,1);
    g.addedge(1,2);
    g.addedge(2,3);
    g.addedge(3,4);
    g.addedge(4,5);
    g.printgraph();
g.printgraph();
g.bfs(0);
    return 0;
}