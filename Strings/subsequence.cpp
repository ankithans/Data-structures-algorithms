#include <bits/stdc++.h>
using namespace std;


void inputOutput() {
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
}

bool isSubSequence(string s1, string s2) {

	int len1 = s1.size(), len2 = s2.size(), i = 0, j = 0;
	while (i < len1 && j < len2) {
		if (s1[i] == s2[j])
			j ++;
		i ++;

		if (j == len2)
			return true;
	}
	return false;
}


int main() {
	inputOutput();

	cout << isSubSequence("abcd", "adc");


	return 0;

}


/*
	given 2 strings, check if string is a subsequence of first string

	if s2 is a subsequence of string s1, then s2 can be formed by deleting
	some chars in it.

	abcd
	acd
*/