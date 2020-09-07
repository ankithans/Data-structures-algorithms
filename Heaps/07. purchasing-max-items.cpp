#include <bits/stdc++.h>
using namespace std;


void inputOutput() {
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
}


/*
	I/p: cost[] = { 1, 12, 5, 111, 200 }
				sum = 10
	O/p: 2

	I/p: cost[] = { 20, 10, 5, 30, 100 }
				sum = 35
	O/p: 3


	1. Method 1 : (sorting)
		cost[] = { 1, 5, 12, 111, 200 }
		  sum = 10
		  res = 0
		i = 0 : sum = 9, res = 1
		i = 2 : sum = 4, res = 2
		i = 3 : return res
		time : O(nlogn)


	2. Method 2 : Use Heap
		sum = 10
		res = 0

		since top is smaller than sum, pop it.
			sum = 9, res = 1

		since top is smaller than sum, pop it.
			sum = 4, res = 2

		Now top is not smaller than sum, return res.
		time : O(n) + O(res*logn) // on avg better
*/


int main() {
	inputOutput();


	return 0;
}



