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
    vector<vector<long long>> t(k + 1, vector<long long>(k + 1));
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
    
   
    vector<long long> F1(k + 1);

//    for(int i=1;i<=k;i++){
//       F1[i]=i;
//    }
F1[1]=1;
F1[2]=2;
// F1[3]=4;
//for intialising of ladder k vector we will have to find k values which requires dp
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
                mat[i][j] = 1;
            }

        }
    }

    if(n<=2){
    
        return F1[n];
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

    int n;

    cin >> n;
    cin >> k;
   int d= matrixexpo(n);
   cout<<d<<endl;

    return 0;
}