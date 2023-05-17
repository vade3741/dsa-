#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
       for(int i=0;i<t;i++)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        //int n=a.length();
        vector<int> v;
        int count = 0;
        int index=(s.find('1'));
       // int x=(a.find('1'));
       //cout<<previous<<endl;
        for (int i = index+1; i < n; i++)
        {
        if(s[i]=='1')
        {
            v.push_back(i-index);
            index=i;
        }
            
        }
        int key=0;
 for(auto x:v)
        {
            if(x&1)
            {
                key=1;
                break;
            }
        }
        if(key==1)
        {
            cout<<"1"<<endl;
        }
        else
        {
            cout<<"2"<<endl;
        }
    }
 return 0;
}