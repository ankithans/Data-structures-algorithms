#include <bits/stdc++.h>
using namespace std;


void inputOutput() {
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
}

int fun(int n) {
	if (n < 10)
		return n;
	return fun(n / 10) + n % 10;
}


int main() {
	inputOutput();



	return 0;

}

/*
	Write a recursive function to find sum of digits in a number

	I/p: n = 253
	O/p: 10
	2 + 5 + 3

	I/p: n = 9987
	O/p: 33
	9 + 9 + 8 + 7

	253
	fun(253) = 10
	fun(25) + 3 = 10
	fun(2) + 5 = 7
	= 2
*/
