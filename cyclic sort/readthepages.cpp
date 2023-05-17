#include<bits/stdc++.h>
#include<iostream>
#define int long long int
using namespace std;
bool bookcheck(vector<int> &v,int m,int n){
          int sum = 0;
      int count = 1;
      for (int i = 0; i < v.size(); i++)
      {
            if (v[i] > m)
            {
                  return false;
            }
            if (sum + v[i] > m)
            {
                  count++;
                  sum = v[i];
                  if (count > n)
                  {
                        return false;
                  }
            }
            else
            {
                  sum += v[i];
            }
      }
      return true;
}
int bookallocation(vector<int> &v,int start,int end,int n){
    int res=INT_MAX;;
    while(end>=start){
        int mid =(start+end)/2;
        if(bookcheck(v,mid,n)){
              res=mid;
                end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return res;
}
int32_t main()
{
int n,k;
cin>>n>>k;
vector<int> v;
int sum=0;
for(int i=0;i<n;i++){
    int temp;
    cin>>temp;
    v.push_back(temp);
    sum+=v[i];
}
cout<<bookallocation(v,v[0],sum,k)<<endl;

return 0 ;
}