#include <bits/stdc++.h>
using namespace std;


void inputOutput() {
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
}


/*
	A simple but wrong solution
	-> Do an traversal for every node, check if its left child is smaller
		and right is greater.

	Method 2 (inefficient)
		For every node,
			1. Find maximum in left subtree
			2. Find minimum in right subtree
			3. check if the current node is greater than the maximum
				and smaller than the minimum.

	Method 3 (Efficient Solution)
		1. Pass a range for every node
		2. For root, range is -∞ to +∞
		3. For left child of a node, in a range, we change upper bound as
			the node's value.
		4. For right child of a node, in range, we change lower bound as
			node's value.
*/
// O(n)
bool isBST(Node *root, int min, int max)
{
	if (root == NULL) return true;

	return (root -> data > min &&
	        root -> data < max &&
	        isBST(root -> left, min, root -> data) &&
	        isBST(root -> right, root -> data, max));
}

/*
	Method 4 (Efficient Solution) (Inorder Travesal)
		A Binary tree is BST if inorder traversal of it is in increasing order.

			20
		   /  \
		  8   30
		     /  \
		    18  35

		Inorder : 8 20 18 30 35

			 80
		   /    \
		  70     90
		 /  \    /
		60  75  85

		Inorder : 60 70 75 80 85 90
*/
int prev = INT_MIN;
bool isBST(Node *root)
{
	if (root == NULL) return true;
	if (isBST(root -> left) == false) return false;
	if (root -> key <= prev) return false;
	prev = root -> key;
	return isBST(root -> right);
}



int main() {
	inputOutput();

	return 0;
}


/*
	Check for BST

	I/p:  10
		 /  \
		8   20
		   /  \
		  13  24
	O/p: yes

	I/p:  20
		 /  \
		8   30
		   /  \
		  18  35
	O/p: No

	I/p:  NULL
	O/p: yes

	I/p: 10
	O/p: yes

	I/p:   10
		  /  \
		 12  30
	O/p: No

*/