#include <bits/stdc++.h>
using namespace std;


void inputOutput() {
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
}


// O(3^n)
int maxCuts(int n, int a, int b, int c) {
	if (n < 0)
		return -1;
	if (n == 0)
		return 0;
	int res = max(maxCuts(n - a, a, b, c),
	              maxCuts(n - b, a, b, c),
	              maxCuts(n - c, a, b, c));
	if (res == -1)
		return -1

		       return res + 1;
}


int main() {
	inputOutput();



	return 0;

}

/*
	Given a rope of length n, you need to find maximum
	number of pieces you can make such that length of
	every piece is in set { a, b, c } for given three
	values a, b and c.

	Recursion Tree :
	https://drive.google.com/file/d/1iXQypHDtfsI7-d6pL6Cc7afAeika01kU/view?usp=sharing

	I/p: n = 5, a = 2, b = 5, c = 1
	O/p: 5

	I/p: n = 23, a = 12, b = 9, c = 11
	O/p: 2

	I/p: n = 5, a = 4, b = 2, c = 6
	O/p: -1

*/
