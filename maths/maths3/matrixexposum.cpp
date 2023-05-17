#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long int

vector<long long> B;
vector<long long> C;
int k;
int p;

vector<vector<long long>> multiply(vector<vector<long long>> a, vector<vector<long long>> b)
{
    vector<vector<long long>> t(k + 2, vector<long long>(k + 2));
    for (int i = 1; i <= k+1; i++)
    {
        for (int j = 1; j <= k+1; j++)
        { t[i][j]=0;
            for (int x = 1; x <= k+1; x++)
            {
                t[i][j] +=  (a[i][x] * b[x][j]) ;
                    if(t[i][j] >= p) t[i][j] %= p;
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
    int sum = 0;
      for (int i = 0; i < k; i++)
        {
            sum =(sum+ (B[i]))%p;
        }
    if (n == 0)
    {
        return 0;
    }
    if (n <= k)
    {
      
        return sum;
    }
    vector<long long> F1(k + 2);

    for (int i = 1; i <= k+1; i++)
    { if(i==1){
        F1[i] = sum%p;
    }else{
        F1[i] = B[i - 2];
    }
    }
    vector<vector<long long>> mat(k + 2, vector<long long>(k + 2));

    for (int i = 1; i <= k + 1; i++)
    {

        for (int j = 1; j <= k + 1; j++)
        {

            if (i < (k + 1) && i > 1)
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
                if (i == 1)
                {
                    if (j == 1)
                    {
                        mat[i][j] = 1;
                    }else{
                    mat[i][j] = C[(k+1) - j];
                }
                }
                else
                {
                    if (j == 1)
                    {
                        mat[i][j] = 0;
                    }
                 else{   mat[i][j] = C[(k+1) - j];
                }
                }
            }
        }
    }

    mat = powers(mat, n - k);
  
    int res = 0;
    for (int i = 1; i <= k+1; i++)
    {
    
        res = (res + (mat[1][i] * F1[i]) % p) % p;
    }
    return res;
}
int32_t main()
{

    int c;
    int temp;
    int m, n;

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
        cin >> m;
        cin >> n;
        cin>>p;
         int e=matrixexpo(m-1) ;
        int d = matrixexpo(n);
        // cout<<d<<" "<<e<<endl;
                int tot = ( d - e)  % p;
        if(tot < 0) tot += p;
        cout<<tot<<'\n';

        // cout<<d-e+1<< endl;
        
        B.clear();
        C.clear();
    }
    return 0;
}