#include<iostream>
#include<bits/stdc++.h>
using namespace std;
  int n;
     int p[3005] = {0};
void prime_seieve()
{
    
    // marking all odd numbers as prime
    for (long long i = 3; i <= 3000; i += 2)
    {
        p[i] = 1;
    }
    // sieve
    for (int i = 3; i <= 3000; i += 2)
    {
        // if the current number is not marked(it is prime)
        if (p[i] == 1)
        {
            // mark all the multiples as not prime
            for (int j = 2 * i; j <= 3000; j = j + i)
            {
                p[j] = 0;
            }
        }
    }
    // special case
    p[2] = 1;
    p[1] = p[0] = 0;
}


int main()
{
  
    cin>>n;
    prime_seieve();
    int count=0;
    int m=0;
    for(int j=1;j<=n;j++){
     count=0;
    for(int i=0;i<j;i++){
          if (p[i]==1){
          
                if(j%i==0){
                    count++;
                    
                }
          }
          }
                    
            if(count==2){
               m++;
    }
    }
    cout<<m<<endl;
  
      return 0;
}