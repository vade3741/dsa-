#include<iostream>
using namespace std;
int main()
{ 
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        float sum=0;
        for(int i=1;i<=n;i++){
            sum+=(1/(float)i);
        }
            float value = (int)(n*sum * 100 + .5);
    float var=(float)value / 100;
        cout<<var<<endl;
    }

      return 0;
}