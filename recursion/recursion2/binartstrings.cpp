#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        string a,b;
        cin>>a>>b;
        int count=0;
        int key=0;
        for(int i=0;i<n;i++){
                if(a[i]=='1'){
                    count++;
                }
                if(b[i]=='1'){
                       key++;
                }
        }
        if(count==key){
            cout<<"YES"<<endl;
        }else{cout<<"NO"<<endl;
        }
    }
      return 0;
}