#include <bits/stdc++.h>
using namespace std;


void inputOutput() {
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
}


int main() {
	inputOutput();



	return 0;

}


/*
	we are given a text and a pattern we are needed to find all the occurences of the
	pattern in the given text.

	I/p: txt = "abdabcbabc"
		 pat = "abc"
	O/p: 3 7

	I/p: txt = "aaaaa"
		 pat = "aaa"
	O/p: 0 1 2

	I/p: txt = "abcd"
		 pat = "xyz"
	O/p: Not Found

	1. Like Naive algorithm we slide the pattern one by one.
	2. compare hash values of pattern and current text window. if the hash
		values match, then only compare individual characters.


		txt = "a b d a b c b a b c"
		pat = "a b c"

		p: hash value of pattern
		t: hash value of current window of text

		simple hash: sum of values			a 	1
		Problme Spurious Hits				b  	2
											c  	3
											d 	4
											e	5

		p = (1 + 2 + 3) = 6

		i = 0: t = (1 + 2 + 4) = 7
		i = 1: t = (2 + 4 + 1) = 7
		i = 2: t = (4 + 1 + 2) = 7
		i = 3: t = (1 + 2 + 3) = 6 (Match)
		i = 4: t = (2 + 3 + 2) = 7
		i = 5: t = (3 + 2 + 1) = 6 (Spurious Hit)
		i = 6: t = (2 + 1 + 2) = 5
		i = 7: t = (1 + 2 + 3) = 6 (Match)

		Rolling Hash
			t(i + 1) = t(i) + txt[i + m] - txt[i]
			M : Length of Pattern


	Improved Hash
		h("abc") = 1 * d^2 + 2 * d^1 + 3 * d^0 = 1*5^2 + 2*5^1 + 3*5^0 = 38
	d=5	h("dab") = 4 * d^2 + 1 * d^1 + 2 * d^0 = 107

		Rolling
			t(i + 1) = d*(t(i) - txt[i] * d^m-1) + txt[i + m]
			m - length of pattern

		Example
			txt =



*/
