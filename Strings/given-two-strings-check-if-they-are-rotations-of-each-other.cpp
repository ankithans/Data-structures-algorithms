#include <bits/stdc++.h>
using namespace std;


void inputOutput() {
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
}

bool areRotations(string s1, string s2) {
	if (s1.length() != s2.length())
		return false;
	s1 = s1 + s1;
	return (s1.find(s2) != string::npos);
}

int main() {
	inputOutput();

	cout << areRotations("ABAA", "AAAB");

	return 0;

}


/*
	Given two strings, check if they are rotations of each other.

	I/p: s1 = "ABCD", s2 = "CDAB"
	O/p: True

	I/p: s1 = "ABAA", s2 = "AAAB"
	O/p: True

	I/p: s1 = "ABAB", s2 = "ABBA"
	O/p: False


*/