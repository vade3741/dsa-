#include <iostream>
using namespace std;
int main()
{
    int a[100000];
    int n;
    cin >> n;
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        j = j ^ a[i];
    }
    int temp=j;
    int pos=0;
    int i;
    for(i=0;i<<n;i++){
        if(temp&(1<<i)==1){
            break;
        }
    }pos=i;
    int mask=1<<pos;
    int x=0;
    int y=0;
    for(int i=0;i<n;i++){
       if((a[i]&mask)>0){

       
        x=x^a[i];
    }
    y=j^x;
    }
    cout<<min(x,y)<<" "<<max(x,y);
    
    return 0;
}