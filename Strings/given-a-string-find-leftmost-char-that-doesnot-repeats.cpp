#include <bits/stdc++.h>
using namespace std;


void inputOutput() {
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
}

// Naive Solution
// two traversal solution
// O(n)
int leftmostNotRepeating(string str) {
	int count[256] = {0};
	for (int i = 0; i < str.length(); i ++) {
		count[str[i]] ++;
	}

	for (int i = 0; i < str.length(); i ++) {
		if (count[str[i]] == 1)
			return i;
	}
	return -1;
}

// one traversal solution
int firstNonRepeat(string str) {
	int res = INT_MAX;
	int fI[256];
	for (int i = 0; i < 256; i ++)
		fI[i] = -1;

	for (int i = 0; i < str.length(); i ++) {
		if (fI[str[i]] == -1)
			fI[str[i]] = i;
		else
			fI[str[i]] = -2; // if element is repeating
	}

	for (int i = 0; i < 256; i ++) // loop for non repeating
		if (fI[i] > 0)
			res = min(res, fI[i]);

	return (res == INT_MAX) ? -1 : res;
}



int main() {
	inputOutput();

	cout << firstNonRepeat("geeksforgeeks");

	return 0;

}


/*
	Given a strings, find leftmost char that repeats.

	I/p: str = "geeksforgeeks"
	O/p: 5 // Index of 'f'

	I/p: str = "abcabc"
	O/p: -1




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