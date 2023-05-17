#include <iostream>
#include <math.h>

using namespace std;
#define int long long int
int32_t main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string str;
        string s = "";
        cin >> str;
        int n;
        int j;
       
        n = str.length();
         int count=0;
       
            for (int i = 0; i < n; i++)
            {
                if (str[i] == str[i - 1] && i > 0)
                {
                   
                    continue;
                }
                else
                {
                  s += str[i];
                    if(str[i] =='0'){
                        count++;
                    }
                }
            }
        
    
if(count==1){
    cout<<"1"<<endl;
}
else if(count>=2)
{
    cout<<"2"<<endl;
}
else if(s.length()==1 && s[0]=='1')
{
    cout<<"0"<<endl;
}
else if(s.length()==1 && s[0]=='0')
{
    cout<<"1"<<endl;
}

    }
    return 0;
}