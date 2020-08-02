#include <bits/stdc++.h>
using namespace std;


void inputOutput() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}


bool isPallindrome(string str) {
	int i, j, n = s.size();
	for ( i = 0, j = n - 1; i < j; i ++, j --)
		if (s[i] != s[j])
			break;

	if (i < j)
		return 0;
	else
		return 1;
}

bool isPallindrome_second(string s) {
	for (int i = 0; i < n / 2; i ++)
		if (s[i] != s[n - i - 1])
			return 0;
	return 1;

}


int main() {
	inputOutput();

	cout << isPallindrome("aba")


	     return 0;

}


/*
	check if the string is a pallindrome or not

	abc -> 0
	aba -> 1
	a -> 1
	aaa -> 1
*/