#include<iostream>
using namespace std;
#define int long long int
int32_t main()

{int t;
cin>>t;
for(int i=0;i<t;i++)
    {int n;
    cin>>n;
    string s;
    cin>>s;
    int flag=0;
    int key=0;
    
// for(int i=0;i<n;i++){
// if(s[i]=='1'){
//     flag++;
// }
// else{
//     key++;
// }
// }
int c=stoi(s,0,2);

for(int i=0;i<n;i++){
    if((c&(1<<i))>0){
        flag++;
    }
    else{
        key++;
    }
}
if((flag%2)!=0 && (key%2)!=0){
    cout<<"NO"<<endl;
}
else{
    cout<<"YES"<<endl;
}

    }
      return 0;
}