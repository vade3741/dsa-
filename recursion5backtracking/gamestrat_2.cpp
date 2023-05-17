// C++ program to find out
// maximum value from a given
// sequence of coins
#include <bits/stdc++.h>
using namespace std;

// Returns optimal value possible
// that a player can collect from
// an array of coins of size n.
// Note than n must be even
int optimalStrategyOfGame(vector<long long int> arr, int n)
{
	
	int table[n][n];

	for (int gap = 0; gap < n; gap++) {
		for (int i = 0, j = gap; j < n; i++, j++) {
			
			if(gap==0){
                table[i][j]=arr[i];
                }
                else if(gap==1){
                    table[i][j]=max(arr[i],arr[j]);
                }
                else{
                    int val11=arr[i]+min(table[i+2][j],table[i+1][j-1]);
                    int val12=arr[j]+min(table[i][j-2],table[i+1][j-1]);
                    int val =max(val11,val12);
                    table[i][j]=val;

                }
		}
	}

	return table[0][n - 1];
}


int main()
{
	 int n;
    cin>>n;
    vector<long long int> arr;
    for(int i=0;i<n;i++){
        long long int temp;
        cin>>temp;
        arr.push_back(temp);
}
cout<<optimalStrategyOfGame(arr,n)<<endl;

	return 0;
}
