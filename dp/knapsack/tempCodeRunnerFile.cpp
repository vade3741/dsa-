const int m=1e9+7;
int fact[100005];
int binexp(int a,int b){
int ans=1;
while(b>0){
    if(b&1){
ans=(ans*1LL*a)%m;

    }
    a=(a*a*1LL)%m;
    b=b>>1;
}
return ans;
}
void computefact(){
    fact[0]=1;
    for(int i=1;i<=100000;i++){
               fact[i]=(i*1LL*fact[i-1])%m;
    }
}
int computecombination(int n,int i){
int num=fact[n];
int denum=(fact[n-i]*fact[i]*1LL)%m;
int c=binexp(denum,m-2)%m;
return (num*c*1LL)%m;
}

bool sumtest(int sum,int c,int d){
    bool best =false;
while (sum>0)
{
if((sum%10)==c||(sum%10)==d){
best=true;
break;
}
sum=sum/10;

}
return best;

}
int solve(int n,int a,int b,int c,int d){
    int ans=0;
    
computefact();
    for(int i=0;i<=n;i++){
int sum=a*i+(n-i)*b;
if(sumtest(sum,c,d)){
int ct=(computecombination(n, i)*1LL)%m;
ans=(ans+0LL+ct)%m;
}
    }
    return ans;
}