#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{

    string s1;

    getline(cin, s1);

    string s2;

    getline(cin, s2);
    
    int l=0;
    int r=0;
    map<char,int> ms1,ms2;
    
    for(int i=0;i<s2.size();i++){
        ms2[s2[i]]++;
    }
    for(auto x:ms2){
        cout<<x.first<<x.second<<endl;
    }
for(int r=0;r<s1.size();r++){
    ms1[s1[r]]++;
    bool good=true;
    for(auto x:ms2){
        //x is a  vb pair of (char,int)'
        //condition checks whether string 2 char is present or not if present must have frequeny >= than stirng 2
        if(ms1.count(x.first)==0||ms1[x.first]<x.second){
            good =false;
        break;
        }
    }if(!good){
        continue;
    }else{

while(s1.size()>l&&l<=r&&(ms2.count(s1[l])==0)||ms1[s1[l]]>ms2[s1[l]]){
ms1[s[l]]--;
if(ms1[s[l]]==0){
    ms1.erase(s[l]);
}
l++;
}





    }
    //string window from l to r is not good
    }
    return 0;
}