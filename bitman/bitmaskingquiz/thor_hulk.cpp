#include <iostream>
#include <bits/stdc++.h>
using namespace std;
/*
finding sunsequences/subsets of a given a string
Input-"AbC"
output -" ",a ,ab,abc,b,bc,c,ac

*/

int filterchars(int n, vector<int> a,int m)
{
    int ans;
    ans = m; // 999=n
    int j = 0;
    int k = 0;

    while (n > 0)
    {
        int last_bit = (n & 1);
        if (last_bit == 1)
        {
            // cout<<a[j];
            ans = ans / a[j];
            k++;
        }
        j++;
        n = n >> 1;
    }
    if (k % 2 == 0)
    {
        ans = -ans;
    }

    return ans;
}
vector<int> printsubsets(vector<int> a,int m)
{
    // int n=strlen(a);
    vector<int> v;
    int n=a.size();

    for (int i = 0; i < (1 << n); i++)
    {
        int ans = filterchars(i, a,m);
        v.push_back(ans);
    }
    return v;
}
int main()
{
    int t;
    cin>>t;
    for(int ar=0;ar<t;ar++){
    int n;
    cin >> n;
    vector<int> x;
    int i;
    int j;
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> a[i];

    // }
    // char a[100];

    // cin>>a;i
    int c = 1;
    int b = 20;
    if (c <= 2)
    {
        c = 2;
        if (b >= 2)
        {
            x.push_back(c);
            c++;
        }
    }

    // MAKING SURE THAT a IS ODD BEFORE WE BEGIN
    // THE LOOP
    if (c % 2 == 0)
        c++;

    // NOTE : WE TRAVERSE THROUGH ODD NUMBERS ONLY
    for (i = c; i <= b; i = i + 2)
    {

        // flag variable to tell
        // if i is prime or not
        bool flag = 1;

        // WE TRAVERSE TILL SQUARE ROOT OF j only.
        // (LARGEST POSSIBLE VALUE OF A PRIME FACTOR)
        for (j = 2; j * j <= i; ++j)
        {
            if (i % j == 0)
            {
                flag = 0;
                break;
            }
        }

        // flag = 1 means i is prime
        // and flag = 0 means i is not prime

        if (flag == 1)
        {
            if (i == 1)
                continue;
            else
                x.push_back(i);
        }
    }

    vector<int> p = printsubsets(x, n);
    int sum = 0;
    for (auto it = p.begin() + 1; it != p.end(); it++)
    {
        sum = sum + (*it);
    }
    cout << sum << endl;
    }  
    return 0;
}