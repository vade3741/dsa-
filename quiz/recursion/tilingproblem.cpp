#include<iostream>
const int  MOD =1e9+7;
#define int long long int
using namespace std;
int count1(int n,int m)
{
int count[n+1];
count[0] = 0;
for(int i=1;i<=n;i++)
{
if(i>m)
count[i] = (count[i-1]+count[i-m])%MOD;
else if(i==m)
count[i] = 2;
else
count[i] = 1;
}
return count[n];
}
//recursive
int tiling(int n,int m)
{
if(n<=0)
return 0;
else if(n>=1 and n<m)
return 1;
else if(n==m)
return 2;
else
return (count1(n-1,m)+count1(n-m,m))%MOD;
}
int32_t main()
{
    int t;
    cin>>t;
    while(t--){
      int n,m;
      cin>>n>>m;
      cout<<tiling(n,m)<<endl;
    }
      return 0;
}