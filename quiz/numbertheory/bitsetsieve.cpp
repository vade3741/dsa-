#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bitset<1000006> b;
const int n = 1000006;
vector<long long int> primes;
void isbitseieve()
{
    b.set();
    b[0] = b[1] = 0;
    for (long long int i = 2; i <= n; i++)
    {
        if (b[i]==1)
        {
            primes.push_back(i);

            for (long long int j = 2 * i; j <= n; j += i)
            {
                b[j] = 0;
            }
        }
    }
}
bool bigis__prime(long long int num){
    if(num<=n){
        if(b[num]==1){
              return true;
        }
        else{
            return false;
        }
    }
    for(long long int i=0;primes[i]*1ll*primes[i]<=num;i++){

        if(num%primes[i]==0){
            return false;
    }
}
    return true;
}
int main()
{
    isbitseieve();
    // for (int i = 0; i <= 100; i++)
    // {
    //     cout << primes[i] << " ";
    // }
    if(bigis__prime(2147483647)){
        cout<<"prime"<<endl;
    }
    else{
        cout<<"NOT Prime"<<endl;
    }

    return 0;
}