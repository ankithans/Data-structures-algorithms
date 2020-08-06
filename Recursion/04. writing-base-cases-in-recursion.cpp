#include <bits/stdc++.h>
using namespace std;


void inputOutput() {
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
}

int fact(int n) {
	if (n == 0) // base case
		return 1;
	return n * fact(n - 1);
}

int fib(int n) {
	if (n == 0) return 0;
	if (n == 1) return 1;
	// or if(n <= 1) return n;
	return fib(n - 1) + fib(n - 2);
}

int main() {
	inputOutput();



	return 0;

}

/*
	--> Factorial n where n >= 0
		I/p: n = 4
		O/p: 24

		I/p: n = 0
		O/p: 1

	--> Nth Fibonaacci Number where n >= 0
		0, 1, 1, 2, 3, 5, 8, 13, ....

		I/p: n = 3
		O/p: 2

		I/p: n = 0
		O/p: 0

		I/p: n = 1
		O/p: 1

*/
