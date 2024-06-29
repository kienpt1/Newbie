    //j < stars.size(): This ensures that the index j is within the bounds of the stars array.
    // It prevents accessing an out-of-bounds index, which would cause an error.
    //i == stars[j]: This checks if the current loop index i matches the index specified 
    //in the stars array at position j. 
    //If it matches, it means that an asterisk should be placed at this position in the ans string
//     Suppose stars contains {2, 4, 7} and the loop is iterating over indices from 0 to 10:

// For i = 0, i = 1: The conditions are not met since i does not match any value in stars.
// For i = 2: i == stars[0] is true (2 == 2), so an asterisk is added to ans, and j is incremented to 1.
// For i = 3: The conditions are not met.
// For i = 4: i == stars[1] is true (4 == 4), so an asterisk is added to ans, and j is incremented to 2.
// The process continues, adding asterisks at the appropriate positions as specified by stars.

// C++ code to implement the approach

#include <bits/stdc++.h>
using namespace std;

// Function to add stars
string addStars(string s, vector<int>& stars)
{

	// Create a string ans for storing
	// resultant string
	string ans = "";

	int j = 0;

	for (int i = 0; i < s.length(); i++) {

		// If the count of characters
		// become equal to the stars[j],
		// append star
		if (j < stars.size() && i == stars[j]) {
			ans += '*';
			j++;
		}
		ans += s[i];
	}

	return ans;
}

// Driver code
int main()
{
	string str = "geeksforgeeks";
	vector<int> chars = { 1, 5, 7, 9 };
	string ans = addStars(str, chars);

	// Printing the resultant string
	cout << ans << endl;
}
