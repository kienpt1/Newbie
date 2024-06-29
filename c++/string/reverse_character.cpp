// C++ Program to Swap characters in a String
#include <iostream>
#include <string>

using namespace std;

string swapCharacters(string s, int B, int C)
{
	int N = s.size();
	// If c is greater than n
	C = C % N;
	// loop to swap ith element with (i + C) % n th element
    //j < stars.size(): This ensures that the index j is within the bounds of the stars array.
    // It prevents accessing an out-of-bounds index, which would cause an error.
    //i == stars[j]: This checks if the current loop index i matches the index specified 
    //in the stars array at position j. 
    //If it matches, it means that an asterisk should be placed at this position in the ans string
	for (int i = 0; i < B; i++) {
		swap(s[i], s[(i + C) % N]);
	}
	return s;
}

int main()
{
	string s = "ABCDEFGH";
	int B = 4;
	int C = 3;
	s = swapCharacters(s, B, C);
	cout << s << endl;
	return 0;
}

// This code is contributed by Susobhan Akhuli
