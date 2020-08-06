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
	Circular Linked List

		Advantages:
			1. We can traverse the whole list from any node
			2. We can insert an item at both beginning and end in O(1)
				time by maintaining just one pointer(can be useful for
				queue implementation)
			3. Implementating algorithms like Round Rabin

		Disadvantages:
			1. Codes for traversal, insertion, deletion, etc becomes slightly
				complex.

*/
