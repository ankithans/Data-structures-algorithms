#include <bits/stdc++.h>
using namespace std;


void inputOutput() {
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
}

struct Node {
	int data;
	Node *next;
	Node *prev;
	Node(int d) {
		data = d;
		nex = prev = NULL;
	}
}


int main() {
	inputOutput();


	return 0;

}

/*
	Doubly Linked List

	Advanatges over singly linked list
		1. can be traveresed in both directions.
		2. We can delete a given nod ein O(1) time.
		3. We can insert/delete a node before a given node
			in O(1) time.

	Disadvantages
		1. Space required for extra pointer with every node.
		2. The Doubly linked list code becomes more complex
			as extra pointer has to be maintained everywhere.

*/
