#include <bits/stdc++.h>
using namespace std;


void inputOutput() {
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
}


/*
	K Largest Elements

	I/p: arr[] = { 5, 15, 10, 20, 8 }
				k = 2
	O/p: 15 20


	I/p: arr[] = { 8, 6, 4, 10, 9 }
				k = 3
	O/p: 8 9 10


	1. Naive - sort O(nlogn)

	2. Max Heap DS - O(n + klogn) // k items to be extracted

	3. Min Heap DS - Efficient Solution
		1. Build a min heap of first k items. // O(k)
		2. Traverse from (k + 1)th element // O((n - k) * logk)
			a. compare curr element with the top of heap
			   if smaller than top, ignore it.
			b. else remove the top element and insert the curr element
			   in the min heap.
		3. Print contents of the heap // O(k)
*/




int main() {
	inputOutput();


	return 0;
}



