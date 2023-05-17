#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define MOD 1000000000
vector<long long> B;
vector<long long> C;
int k;

vector<vector<long long>> multiply(vector<vector<long long>> a, vector<vector<long long>> b)
{
    vector<vector<long long>> t(k+1,vector<long long>(k+1));
    for (int i = 1; i <= k; i++)
    {
        for (int j = 1; j <= k; j++)
        {
            for (int x = 1; x <= k; x++)
            {
                t[i][j] = (t[i][j] + (a[i][x] * b[x][j]) % MOD) % MOD;
            }
        }
    }
    return t;
}
vector<vector<long long>> powers(vector<vector<long long>> mat, int n)
{
    if (n == 1)
    {
        return mat;
    }
    if (n & 1)
    {
        return multiply(mat, powers(mat, n - 1));
    }
    vector<vector<long long>> mat1 = powers(mat, n / 2);
    return multiply(mat1, mat1);
}
int matrixexpo(int n)
{
    if (n == 0)
    { 
        return 0;
    }
    if (n <= k)
    {
        return B[n- 1];
    }
    vector<long long> F1(k+1);


    for (int i = 1; i <= k; i++)
    {

        F1[i] = B[i - 1];

    }
    vector<vector<long long>> mat(k+1,vector<long long>(k+1));

    for (int i = 1; i <= k; i++)
    {


        for (int j = 1; j <= k; j++)
        {

            if (i < k)
            {

                if (j == i + 1)
                {
                    mat[i][j] = 1;
                }
                else
                {
                    mat[i][j] = 0;
                }
            }
            else
            {
                mat[i][j] = C[k - j];
            }
        }
    }
    mat = powers(mat, n - 1);
    
    int res = 0;
    for (int i = 1; i <= k; i++)
    {
        res = (res + (mat[1][i] * F1[i]) % MOD) % MOD;
    }
    return res;
}
int32_t main()
{

    
    int c;
    int temp;
    int n;

    cin >> c;
    for (int i = 0; i < c; i++)
    {

        cin >> k;
        for (int i = 0; i < k; i++)
        {

            cin >> temp;
            B.push_back(temp);
        }
        for (int i = 0; i < k; i++)
        {

            cin >> temp;
            C.push_back(temp);
        }
        cin >> n;
    
         int d=matrixexpo(n) ;
        cout<<d<< endl;
        B.clear();
        C.clear();
            }
    return 0;
}