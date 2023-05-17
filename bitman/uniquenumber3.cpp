#include<iostream>
using namespace std;

int main()
{//array of fixed size -->o(1)
     int cnt[64] ={0};
     int n,num;
     cin>>n;
     for(int i=0;i<n;i++){
        cin>>num;
//update the count aRRAY BY EXTRACTING BITS
     int j=0;
     while(num>0){
        int last_bit ={num&1};
         cnt[j]+=last_bit;
         j++;
         num=num>>1;  
     }
     }
     //iterate over the array and into decimal
     
     int p=1;
     int ans=0;

     for(int i=0;i<64;i++){

        cnt[i] %=3; 
        ans+=(cnt[i]*p);
        p=p<<1;
     }
     //print the final answer
     cout<<ans<<endl;
      return 0;
}