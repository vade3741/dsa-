#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// void printvec(vector<int> &v){
//  for(int a=0;a<v.size();a++){
//     if(v[a]==1){
//     cout<<"k"<<" ";

//     }
//     else{
//         cout<<"_";
//     }

//  }
//  cout<<endl;
// }
bool knightsafe(vector<vector<int>> &v, int i, int j, int n)
{
    int x = i;
    int y = j;

    if ((x - 2 >= 0) && (y - 1 >= 0) && (v[x - 2][y - 1] == 1))
    {

        return false;
    }
    if ((x - 2 >= 0) && (y + 1 < n) && (v[x - 2][y + 1] == 1))
    {

        return false;
    }
    if ((x - 1 >= 0) && (y - 2 >= 0) && (v[x - 1][y - 2] == 1))
    {

        return false;
    }
    if ((x - 1 >= 0) && (y + 2 < n) && (v[x - 1][y + 2] == 1))
    {

        return false;
    }
    return true;
}
void row_knightplace(int n, vector<vector<int>> &v, int i)
{
    if (i == n)
    {
        for (int j = 0; j < v.size(); j++)
        {

            for (int k = 0; k < v[j].size(); k++)
            {
                if (v[j][k] == 1)
                {
                    cout << "{" << j << "-" << k << "}"
                         << " ";
                }
            }
            cout << " ";
        }

        return;
    }
    for (int j = 0; j < n; j++)
    {
        if (knightsafe(v, i, j, n))
        {
            v[i][j] = 1;

            row_knightplace(n, v, i + 1);

            v[i][j] = 0;
        }
}  
}
    void coloumn_knightplace(int n, vector<vector<int>> &v, int j)
    {
        if (j == n)
        {
            for (int i = 0; i < v.size(); i++)
            {

                for (int k = 0; k < v[i].size(); k++)
                {
                    if (v[i][k] == 1)
                    {
                        cout << "{" << i << "-" << k << "}"
                             << " ";
                    }
                }
                cout << " ";
            }

            return;
        }
        for (int i = 0; i < n; i++)
        {
            if (knightsafe(v, i, j, n))
            {
                v[i][j] = 1;

                coloumn_knightplace(n, v, i + 1);

                v[j][i] = 0;
            }
        }
    }
    int main()
    {
        int n;
        cin >> n;
        vector<vector<int>> v(n, vector<int>(n, 0));

        row_knightplace(n, v, 0);
        coloumn_knightplace(n, v, 0);
        return 0;
    }