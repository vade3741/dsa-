#include<bits/stdc++.h>
#include<iostream>
#define int long long int
using namespace std;
int freqdupli(vector<int>freq,vector<int>keysize,int sum){
    sort(freq.begin(),freq.end(),greater<>());
    int i=0;
    int j=0;
    int m=1;
    int count=0;
 if (sum < freq.size())
    {
        return-1;
}
    while(i<freq.size())
   {
    if(keysize[j]>0){
              count+=freq[i]*m;
        keysize[j]--;

        j++;
        i++;

      
    }
    else{
    j++;
    }
  if(j==keysize.size()){
         j=0;   
         m++;
        }
   }
   return count;
}
int32_t main()
{
int n;
cin>>n;
vector<int> freq;
    int temp;
for(int i=0;i<n;i++){
    cin>>temp;
       freq.push_back(temp);
}
int k;
cin>>k;
int sum=0;
vector<int> keysize;
for(int i=0;i<k;i++){
    cin>>temp;
    keysize.push_back(temp);
    sum+=temp;
} 
cout<<freqdupli(freq,keysize,sum)<<endl;
return 0 ;
}