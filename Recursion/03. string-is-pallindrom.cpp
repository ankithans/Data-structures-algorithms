#include <bits/stdc++.h>
using namespace std;


void inputOutput() {
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
}

// Initially s = 0, e = n - 1
bool isPal(string str, int s, int e) {
	if (s >= e)
		return true;

	if (str[s] != str[e])
		return false;
	return isPal(str, s + 1, e - 1);
}


int main() {
	inputOutput();



	return 0;

}

/*
	Write a recursive function to check if a string pallindrome.

	I/p: str = "aabaa"
	O/p: Yes

	I/p: str = "geeks"
	O/p: No

*/
