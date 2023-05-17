#include<bits/stdc++.h>
using namespace std;

#define int unsigned long long
#define vi vector<int>
#define pb push_back

int32_t main()
{
    int n;
    cin>>n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int no;
        cin>>no;
            v.push_back(no);
    }
    if (n>=130)
    {
        cout<<"Yes";
        return 0;
    }
    
    for (int i = 0; i < n-3; i++)
    {
       for (int j = i+1; j < n-2; j++)
       {
         for (int k = j+1; k < n-1; k++)
         {
            for (int l = k+1; l < n; l++)
            {
               if ((v[i]^v[j]^v[k]^v[l])==0)
               {
                 cout<<"Yes";
                 return 0;
               }
               
            }
            
         }
         
       }
       
    }
    
    cout<<"No";
    return 0;
}