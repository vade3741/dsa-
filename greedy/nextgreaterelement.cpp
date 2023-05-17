#include<bits/stdc++.h>
#include<iostream>
#define int long long int
using namespace std;
int32_t main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v;
        stack<int>s;
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            v.push_back(temp);
        }s.push(v[0]);
        for(int i=1;i<n;i++){
        
                while ((!s.empty())&&s.top()<=v[i])
                {
                    cout<<"Next greater for"<<s.top()<<" is "<<v[i]<<endl;
                    s.pop();
                }
                
                
            
                if(s.empty()){
                    cout<<"Next greater for"<<v[i]<<" is "<<"-1"<<endl;
                }
            else{
                    cout<<"Next greater for"<<v[i]<<" is "<<s.top()<<endl;

            }
            s.push(v[i]);
        }
    }
stack<int >s;

return 0 ;
}