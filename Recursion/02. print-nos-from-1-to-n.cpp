#include <bits/stdc++.h>
using namespace std;


void inputOutput() {
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
}


// Tail Recursive
// tail recursions are optimized by tail call elimination
void fun(int n) {
	// start:
	if (n == 0)
		return;
	cout << n << " ";
	fun(n - 1);
	// compilers do tail call elimination
	// n = n - 1
	// go to start
}

void fun_1toN(int n) {
	if (n == 0)
		return;

	fun(n - 1);
	cout << n << " ";
}

void fun_1toN_tail(int n, int k = 1) {
	if (n < 1)
		return;

	cout << k << " ";
	fun_1toN_tail(n - 1, k + 1);
}


int main() {
	inputOutput();

	fun(5);

	return 0;

}


/*
	write an recursive function to print numbers from 1 to n for a given n.

	I/p: n = 5
	O/p: 5 4 3 2 1

	I/p: n = 3
	O/p: 3 2 1

	write a recursive function to print numbers from 1 to n for a given n.

	I/p: n = 5
	O/p: 1 2 3 4 5

	I/p: n = 3
	O/p: 1 2 3

*/