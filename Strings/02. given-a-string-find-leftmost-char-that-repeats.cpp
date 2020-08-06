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
int leftmostRepeating(string str) {
	for (int i = 0; i < str.length(); i ++) {
		for (int j = i + 1; j < str.length(); j ++) {
			if (str[i] == str[j])
				return i;
		}
	}
	return -1;
}

// O(n)
// requires two traversals of the string
int leftmostRepeating_second(string str) {
	int count[256] = {0};
	for (int i = 0; i < str.length(); i ++) {
		count[str[i]] ++;
	}

	for (int i = 0; i < str.length(); i ++) {
		if (count[str[i]] > 1)
			return i;
	}
	return -1;
}

// O(n)
// one traversal
// we store the leftmost index of every character
int leftmostRepeating_third(string str) {
	int res = INT_MAX;
	int fI[256];
	for (int i = 0; i < 256; i ++)
		fI[i] = -1;

	for (int i = 0; i < str.length(); i ++) {
		if (fI[str[i]] == -1)
			fI[str[i]] = i;
		else
			res = min(res, fI[str[i]]);
	}
	return (res == INT_MAX) ? -1 : res;
}

// more efficient than above
// as we are travelling from right tp left so
// we don't need to
int leftmostRepeating_fourth(string str) {
	int res = INT_MAX;
	int fI[256];
	for (int i = 0; i < 256; i ++)
		fI[i] = -1;

	for (int i = str.length() - 1; i >= 0; i --) {
		if (fI[str[i]] == -1)
			fI[str[i]] = i;
		else
			res = i;
	}
	return (res == INT_MAX) ? -1 : res;
}


int main() {
	inputOutput();

	cout << leftmostRepeating_fourth("abbcd");

	return 0;

}


/*
	Given a strings, find leftmost char that repeats.

	I/p: str = "geeksforgeeks"
	O/p: 0 // Index of 'g'

	I/p: str = "abbcc"
	O/p: 1 // Index of 'b'

	I/p: str = "abcd"
	O/p: -1

	geeksforgeeks -- traversing from right
	fI[s] = -1 -> fI[115] = 12
	fI[k] = -1 -> fI[107] = 11
	fI[e] = -1 -> fI[101] = 10
	fI[e] != -1 -> res = 9
	fI[g] = -1 -> fI[103] = 8
	fI[r] = -1 -> fI[102] = 7
	fI[o] = -1 -> fI[111] = 6
	fI[f] = -1 -> fI[102] = 5
	fI[s] != -1 -> res = 4
	fI[k] != -1 -> res = 3
	fI[e] != -1 -> res = 2
	fI[e] != -1 -> res = 1
	fI[g] != -1 -> res = 0



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