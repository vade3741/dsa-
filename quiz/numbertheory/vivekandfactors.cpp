#include<iostream>
#include<bits/stdc++.h>
#define int long long int
using namespace std;
int sum[100000];
void sieve(){

for(int i=1;i<=100000;i++){
    for(int j=i;j<=100000;j+=i){

    sum[j]+=i;

    }
}
}

int32_t main()
{
    sieve();
    while(1){
        int k;
        cin>>k;
		int j=0;
		int i=1;
		if(k==0){
				return 0;
		}
				
        for( i=1;i<=k;i++){
            if(sum[i]==k){
			   j=1;
               break;
            }
            
        }
          if(j==1){
               cout<<i<<endl;

		}else{
				cout<<-1<<endl;
		}
    }   
      return 0;
}