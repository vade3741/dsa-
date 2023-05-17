#include<iostream>

#include<bits/stdc++.h>
using  namespace std;
class Graph{
    int V;
    list<pair<int,int>>*l;

public :
Graph(int v){
    V=v;
    l=new list<pair<int,int>>[V];
}
void addedege(int u,int v,int cost){
    l[u].push_back(v);
    l[v].push_back(u);
}
};
int main()
{
      return 0;
}