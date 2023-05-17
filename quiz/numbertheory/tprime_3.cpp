Solution:

Basically, try to figure it out that a number can be t - prime if and only if it has 3 divisors from which 2 are fixed viz, 1 and the number itself So, now remains only third number that can divide your number.
Logic:
A number is a T prime if it is a perfect square
and its square root is a prime number.
4 is the only even number which is a T prime number.
Code:


 #include < bits/stdc++.h >
using namespace std;
 #define LIMIT 1000000
long long i, j;
long long primeflag[LIMIT];
void calculateprimeflag(){
    primeflag[0] = primeflag[1] = 1;
    for(i=2;iflag[i]==0){
            for(j=i*i;j<LIMIT;j+=i){
                primeflag[j] = 1;
            }
        }
    }
}
int checkperfectsquare(long long n){
    double sqrtn = sqrt(n);
    if(sqrtn == int(sqrtn)){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    calculateprimeflag();
    long long totalnumbers, n;
    cin>>totalnumbers;
    for(i=0;i<totalnumbers;i++){
        cin>>n;
        if (n==4){
            cout<<"YES"<perfectsquare(n)==1 && primeflag[int(sqrt(n))]==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}