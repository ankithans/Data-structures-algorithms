#include <bits/stdc++.h>
using namespace std;


void inputOutput() {
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
}

// Naive Solution
// O(n)
bool anagram(string s1, string s2) {
	int a1[26] = {0}, a2[26] = {0};

	if (s1.length() != s2.length())
		return false;

	for (int i = 0; s1[i] != '\0'; i ++)
		a1[s1[i] - 'a']++;

	for (int i = 0; s2[i] != '\0'; i ++)
		a2[s2[i] - 'a']++;

	for (int i = 0; i < 26; i ++)
		if (a1[i] != a2[i])
			return false;
	return true;
}

// second approach
// O(n) -> O(n + Alphabet-size)
// O(Alphabet-size) -> O(1)
bool anagram_second(string s1, string s2) {
	if (s1.length() != s2.length())
		return false;
	int count[256] = {0};
	for (int i = 0; i < s1.length(); i ++)
		count[s1[i]] ++;
	for (int i = 0; i < s2.length(); i ++)
		count[s2[i]] --;

	for (int i = 0; i < 256; i ++)
		if (count[i] != 0)
			return false;
	return true;
}




int main() {
	inputOutput();

	cout << minNumberAdded("abcc", "abdd");

	return 0;

}


/*
	Given two strings, check if there are anagram of each other.

	I/p: s1 = "geeks", s2 = "ekegs"
	O/p: Yes

	I/p: s1 = "aabcd", s2 = "abbcd"
	O/p: No

	a1[s1[i] - 'a']++;

	s1[0] - a = g - a = 103 - 97 = 6 -> a[6] ++
				G - a = 71 - 97 = ?? how its working for capitals

	a 97
	b 98
	c 99
	d 100
	e 101
	f 102
	g 103
	h 104
	i 105
	j 106
	k 107
	l 108
	m 109
	n 110
	o 111
	p 112
	q 113
	r 114
	s 115
	t 116


*/

/*
	given 2 strings, find the minimum no of chars you
	need to add to make the both the strings anagram of each other

	I/p: abc d
		 abd c
	O/p: 2
*/