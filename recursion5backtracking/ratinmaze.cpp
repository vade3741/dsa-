#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void printvec(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}
bool computepath(int n, int m, int i, int j, vector<vector<int>> sol, vector<vector<char>> maze)
{
    if (i == (n-1) && j == (m-1))
    { 
        if(maze[i][j]=='X') {
            return false;
        } else {
        sol[n-1][m-1]=1;
        for (auto it = sol.begin(); it != sol.end(); it++)
        {
            printvec(*it);
            cout << endl;
        }
        
        exit(0);
        }
    }
    if (i > (n-1) || j > (m-1))
    {
        return false;
    }
    if (maze[i][j] == 'X')
    {
        return false;
    }
    
    sol[i][j] = 1;
    bool computeright = computepath(n, m, i, j + 1, sol, maze);
  if (computeright)
    {
        return true;
    }
    bool computedown = computepath(n, m, i + 1, j, sol, maze);
    if (computedown)
    {
        return true;
    }
    sol[i][j] = 0;
  
    return false;
}
int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<char>> maze;
    for (int i = 0; i < n; i++)
    {
        vector<char> p;
        for (int j = 0; j < m; j++)
        {
         char a;
            cin >> a;
            p.push_back(a);
        }
                maze.push_back(p);
    }
     

    vector<vector<int>> sol(n, vector<int>(m, 0));
    int j = -1;
   if( computepath(n, m, 0, 0, sol, maze)!=true){
    cout<<j<<endl;
   }

    return 0;
}