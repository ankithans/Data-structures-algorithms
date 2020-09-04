#include <bits/stdc++.h>
using namespace std;


void inputOutput() {
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
}


struct Node {
	int key;
	Node *left, *right;
	Node(int x)
	{
		key = x;
		left = right = NULL;
	}
};


/*
	Efficient Solution
	time : O(h)
	space : O(1)

	1. If root's key is same as x, return root
	2. If root's key is smaller, then change root to root's right.
	3. If root's key is greater, update the result and change root
		to root's left.
*/




int main() {
	inputOutput();


	return 0;
}

/*

	Ceil in a BST

	I/p: x = 14

			 10
		    /  \
		   5   15
		 	  /  \
		     12  30

	O/p: Node 15


	I/p: 	x = 3
			Root of same tree
	O/p: Node 5

	I/p: x = 40
		Root of same tree
	O/p: NULL



*/

