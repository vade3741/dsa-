// C++ program to replace all
// pi in a given string with 3.14

#include <bits/stdc++.h>
using namespace std;

// Function to replace all occurrences
// of pi in a given with 3.14
string replacePi(string input)
{
	string output;

	int size = input.length();

	// Iterate through second last
	// element of the string
	for (int i = 0; i < size; ++i) {

		// If current and current +1 alphabets
		// form the word 'pi'
		// append 3.14 to output
		if (i + 1 < size and input[i] == 'p' and input[i + 1] == 'i') {
			output += "3.14";
			i++;
		}

		// Append the current letter
		else {
			output += input[i];
		}
	}

	// Return the output string
	return output;
}

// Driver Code
int main()
{
	string input = "2 * pi + 3 * pi = 5 * pi";
	cout << replacePi(input);
	return 0;
}
