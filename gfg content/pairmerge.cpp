/*
	This code was submitted by : Chirag Mittal from IIIT Dharwad ( username : iitjeechirag )
	storing all the pairs while merging
	Time Complexity : O(N logN)
	Space Complexity : O(N) + O(Number Of Pairs)

	using Merge Sort Algorithm
*/

#include<bits/stdc++.h>
using namespace std;
void getPairsMerge(int arr[],int l,int r,int mid,vector<pair<int,int>>&p){
	int b[l+r+1],i=l,k=l,j=mid+1;
	while(i<=mid && j<=r){
		if(arr[i]>arr[j]){
			b[k]=arr[j];
			p.push_back({arr[i],arr[j]});
			p.push_back({arr[j],arr[i]});
			p.push_back({arr[j],arr[j]});
			k++;
			j++;
		}
		else{
			p.push_back({arr[i],arr[j]});
			p.push_back({arr[j],arr[i]});
			p.push_back({arr[i],arr[i]});
			b[k]=arr[i];
			i++;
			k++;
		}
	}

	while(i<=mid){
		b[k]=arr[i];
		p.push_back({arr[i],arr[i]});
		i++;
		k++;
	}
	while(j<=r){
		b[k]=arr[j];
		p.push_back({arr[j],arr[j]});
		j++;
		k++;
	}

	for(int x=l;x<=r;x++){
		arr[x]=b[x];
	}
}

void getAllPairs(int arr[],int l,int r,vector<pair<int,int>>&p){
	if(l<r){
		int mid=(l+r)/2;
		getAllPairs(arr,l,mid,p);
		getAllPairs(arr,mid+1,r,p);
		getPairsMerge(arr,l,r,mid,p);
	}
}

int main(){
	int n=3;
	int arr[n]={1,2,3};
	vector<pair<int,int>>p;
	getAllPairs(arr,0,n-1,p);
	for(auto it:p){
		cout<<it.first<<" "<<it.second<<endl;
	}
}
