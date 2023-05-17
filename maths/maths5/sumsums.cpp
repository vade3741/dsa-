#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
 const  int MOD=1e9+7; 

vector<int>C;
vector<int>B;
int k;
vector<vector<long long>> multiply(vector<vector<long long>> a, vector<vector<long long>> b)
{
    vector<vector<long long>> t(k+1,vector<long long>(k+1));
    for (int i = 1; i <= k; i++)
    {
        for (int j = 1; j <=k; j++)
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
vector<int> matrixexpo(int n)
{
    

    
    vector<long long> F1(k+1);


    for (int i = 1; i <= k; i++)
    {

        F1[i] = C[i-1];

    }
    vector<vector<long long>> mat(k+1,vector<long long>(k+1));

    for (int i = 1; i <= k; i++)
    {


        for (int j = 1; j <= k; j++)
        {

            
            

                if (j == i )
                {
                    mat[i][j] = 0;
                }
                else
                {
                    mat[i][j] = 1;
                }
            
            }
    }
    mat = powers(mat, n - 1);
    
    
    int res = 0;
    for(int j=1;j<=k;j++){
        res=0;
    for (int i = 1; i <= k; i++)
    {
        res = (res + (mat[j][i] * F1[i]) % MOD) % MOD;
    }
       B.push_back(res);
    }
    return B;
}
int32_t main()
{

    
    int t;
    // int n;
cin>>k;
    cin >> t;
    
    
         for(int i=0;i<k;i++){
          int temp;
          cin>>temp;
          C.push_back(temp);
         }
         vector<int> d=matrixexpo(t+1) ;
        for(auto x:d){
            cout<<x<<endl;
        }
        
        
            
    return 0;
}