#include <bits/stdc++.h>
using namespace std;


void inputOutput() {
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
}

// Naive Algorithm
// O((m - n + 1) * m)
void patSearch(string txt, string pat) {
	int n = txt.length(), m = pat.length();

	for (int i = 0; i < n - m; i ++) {
		for (int j = 0; j < m; j ++)
			if (txt[i + j] != pat[j])
				break;
		if (j == m)
			cout << i << " ";
	}
}

// if all the char in ptrn are different
// converting naive into O(n)
void patSearch_first(string txt, string pat) {
	int n = text.length(), m = pat.length();

	for (int i = 0; i < n - m; ) {
		for (int j = 0; j < m; j ++)
			if (txt[i + j] != pat[j])
				break;
		if (j == m)
			cout << i << " ";
		if (j == 0) i ++;
		else i = j + i;
	}
}



int main() {
	inputOutput();

	cout << patSearch("ABABAB", "ABAB");

	return 0;

}


/*
	Given a text and a pattern, I have to find all the indexes in which the
	pattern is present.

	I/p: txt = "ABABAB", pat = "ABAB"
	O/p: 0 2

	I/p: txt = "ABCABCD", pat = "ABCD"
	O/p: 3

	I/p: txt = "AAAAA", pat = "AAA"
	O/p: 0 1 2


	Rabin Karp Algorithm -
		we have a ptrn and some text, so we compute the hashfunction of this text.
		And we compute hash function of 1st window of text. so before matching
		individual characters we compare the hash functions which are simple
		integer comparison. so if hash functions are matching then only we
		compare individual characters. So when we move to next window we compute
		the hash function of the next window using the hash function of the prev window
		so this hash function computation is done in constant time.

	KMP Algorithm -



*/