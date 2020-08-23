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

// recursive
bool search(Node *root, int x)
{
	if (root == NULL)
		return false;
	else if (root -> key == x)
		return true;
	else if (root -> key > x)
		return search(root -> left, x);
	else
		return search(root -> right, x);
}

// iterative
bool search(Node *root, int x)
{
	while (root != NULL)
	{
		if (root -> key == x)
			return true;
		else if (root -> key < x)
			root = root -> right;
		else
			root = root -> left;
	}
	return false;
}

/*
	time : O(h)
	space : recursive ? O(h) : O(1)
*/


int main() {
	inputOutput();


	return 0;

}

/*

	Search in BST

	I/p		15
		   /  \
		  5    20
		 /	  /  \
		3    18  80
			/
		   16

		x = 16


*/

