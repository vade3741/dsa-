#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int N,X;
        cin>>N;
        cin>>X;
	    vector<int >v;
	    for(int i=0;i<N;i++){
	        int s,r;
	        cin>>s;
	        cin>>r;
	        if(X>=s){
	            v.push_back(r);
	        }
	        
	    }
     
        cout << *max_element(v.begin(),v.end())<<endl;
	}
	return 0;
}
