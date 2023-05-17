#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int p;
	cin>>p;
	while(p--){
	    int t;
	    cin>>t;
	    int n;
	    cin>>n;
	    vector<int> v;
	    for(int i=0;i<n;i++){
	        int temp;
	        cin>>temp;
	        v.push_back(temp);
	    }
       
	    int sum=t;
	    for(int i=0;i<n;i++){
	        sum=sum-v[i];

	    }

	  float c=  (sum/(float)(20-n));
	  if(c>10.00){
	      cout<<"CSK"<<endl;
	  }else{
	      cout<<"MI"<<endl;
	  }
	}
	return 0;
}
