#include<iostream>
using namespace std;
int main()
{ 
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        int n;
        cin>>n;
        double sum=0;
        for(int i=1;i<=n;i++){
            sum+=(1/(float)i);
        }
    //         float value = (int)(n*sum * 100 + .5);
    // float var=(float)value / 100;
    printf("%.2f \n",(n*sum));
        
    }

      return 0;
}