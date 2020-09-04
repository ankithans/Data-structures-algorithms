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

// Efficient
// time : O(h)
// space O(1)
Node *floor(Node *root, int x)
{
	Node *res = NULL;
	while (root != NULL)
	{
		if (root -> key = x)
			return root;
		else if (root -> key > x)
			root = root -> left;
		else
		{
			res = root;
			root = root -> right;
		}
	}
	return res;
}






int main() {
	inputOutput();


	return 0;

}

/*

	Floor in a BST

	I/p: x = 14

			 10
		    /  \
		   5   15
		 	  /  \
		     12  30

	O/p: Node 12


	I/p: 	x = 4
			Root of same tree
	O/p: NULL

	I/p: x = 30
		Root of same tree
	O/p: Node 30

	I/p: x = 100
		Root of the same tree
	O/p: Node 30



*/

