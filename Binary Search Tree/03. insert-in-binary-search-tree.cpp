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
Node *insert(Node *root, int x)key{
	if (root == NULL)
		return new Node(x);
	else if (root -> key < x)
		root -> right = insert(root -> right, x);
	else if (root -> key > x)
		root -> left = insert(root -> left, x);
	return root;
}

// iterative
Node *insert(Node *root, int x)
{
	Node *temp = new Node(x);
	Node *parent = NULL, *curr = root;
	while (curr != NULL)
	{
		parent = curr;
		if (curr -> key > x)
			curr = curr -> left;
		else if (curr -> key < x)
			curr = curr -> right;
		else
			return root;
	}
	if (parent == NULL)
		return temp;
	if (parent -> key > x)
		parent -> left = temp;
	else
		parent -> right = temp;
	return root;
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

	Insert in BST

	I/p: x = 20
		 Root of the following BST

			10
		   /  \
		  5    15
			  /  \
		     12  18

	O/p: Root of the following BST

			10
		   /  \
		  5    15
			  /  \
		     12  18
		     	   \
		     	   	20


*/

