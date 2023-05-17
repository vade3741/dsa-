#include <bits/stdc++.h>
#include <iostream>
#define int long long int
using namespace std;
int32_t main()
{
    stack<char> st;
    string s;
    getline(cin, s);


    
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ')')
        {
            if(st.top()!='('){
            while (st.top() !='(')
            {
                st.pop();
            }
            st.pop();
            }
            else{
                cout<<"true"<<endl;
                    return 0;
            }
        }
        else
        {
            st.push(s[i]);
        }
    }
    cout<<"false"<<endl;
    return 0;
}