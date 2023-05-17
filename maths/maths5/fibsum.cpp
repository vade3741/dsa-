#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
 const  int MOD=1000000007; 



vector<vector<long long>> multiply(vector<vector<long long>> a, vector<vector<long long>> b)
{
    vector<vector<long long>> t(3,vector<long long>(3));
    for (int i = 1; i <= 2; i++)
    {
        for (int j = 1; j <=2; j++)
        {
            for (int x = 1; x <= 2; x++)
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
     if(n==1||n==2){
        return 1;
    }
    
    
    vector<long long> F1(3);


    for (int i = 1; i <= 2; i++)
    {

        F1[i] = 1;

    }
    vector<vector<long long>> mat(3,vector<long long>(3));

    for (int i = 1; i <= 2; i++)
    {


        for (int j = 1; j <= 2; j++)
        {

            if (i < 2)
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
                mat[i][j] = 1;
            }
        }
    }
    mat = powers(mat, n - 1);
    
    int res = 0;
    for (int i = 1; i <= 2; i++)
    {
        res = (res + (mat[1][i] * F1[i]) % MOD) % MOD;
    }
    return res;
}
int32_t main()
{

    
    int t;
    int n;
int m;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        cin>>m;
        
         int d=matrixexpo(n+1) ;
         int e=matrixexpo(m+2) ;

        
            int tot = ( e - d)  % MOD;
        if(tot < 0) tot += MOD;
        cout<<tot<<'\n';
        
            }
    return 0;
}