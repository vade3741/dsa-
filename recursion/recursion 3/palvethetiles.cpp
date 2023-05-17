// Given a “2 x n” board and tiles of size “2 x 1”, count the number of ways to tile the given board using the 2 x 1 tiles.
//  A tile can either be placed horizontally i.e., as a 1 x 2 tile or vertically i.e., as 2 x 1 tile. 
// C++ program to count the
// no. of ways to place 2*1 size
// tiles in 2*n size board.
#include <iostream>
using namespace std;

int getNoOfWays(int n)
{
	// Base case
	if (n <= 3)
	return 1;

	return getNoOfWays(n - 1) + getNoOfWays(n - 4);
}

// Driver Function
int main()
{
	cout << getNoOfWays(4) << endl;
	cout << getNoOfWays(8);
	return 0;
}
