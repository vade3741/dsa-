#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int sum=0;
		
    while(sum>=0){
		int temp;
		cin>>temp;
		sum+=temp;
        if(sum>=0){
		cout<<temp<<endl;
		}
    }
        
	}
	return 0;
}