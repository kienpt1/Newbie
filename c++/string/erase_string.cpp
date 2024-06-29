// C++ program to remove a particular character
// from a string.
#include <bits/stdc++.h>
#include<string> 
using namespace std;

void removeChar(string s, char c)
{

	int j, n = s.length();
	for (int i = j = 0; i < n; i++)
		if (s[i] != c)
			s[j++] = s[i];

	s[j] = '\0';
}

int main()
{
	char s[] = "geeksforgeeks";
	removeChar(s, 'g');
	cout << s;
	return 0;
}
