// C++ program to print all permutations with
// duplicates allowed using next_permutation
#include <bits/stdc++.h>
using namespace std;

// Function to print permutations of string str
// using next_permutation
void display(int a[], int n)
{
  for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }
  cout << endl;
}
void permute(int * str,int n)
{
	// Sort the string in lexicographically
	// ascending order
	sort(str, str+n);

	// Keep printing next permutation while there
	// is next permutation
	do {
	display(str, n);
	} while (next_permutation(str, str+n));
}

// Driver code
int main()
{
    int n;
    cin>>n;

	 int str[n];
     for(int i=0;i<n;i++){

       cin>>str[i];
     }  
	permute(str,n);
	return 0;
}
