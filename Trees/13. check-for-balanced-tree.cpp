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
	Node *left;
	Node *right;
	Node(int k)
	{
		key = k;
		left = right = NULL;
	}
};


// Naive Solution O(n^2)
bool isBalanced(Node *root)
{
	if (root == NULL) return true;
	int lh = height(root -> left);
	int rh = height(root -> right);
	return (abs(lh - rh) <= 1 &&
	        isBalanced(root -> left) &&
	        isBalanced(root -> right));
}


// Efficient Solution : O(n)
int isBalanced(Node *root)
{
	if (root == NULL) return 0;
	int lh = isBalanced(root -> left);  // check for left subtree
	if (lh == -1) return -1;			// also get the left height

	int rh = isBalanced(root -> right); // check for right subtree
	if (rh == -1) return -1;  			// also get the right height

	if (abs(lh - rh) > 1) return -1;
	else return max(lh, rh) + 1;
}




int main() {
	inputOutput();


	return 0;

}

/*
	Given a binary tree we need to check if the given binary tree
	is height balanced or not.
	Diff b/w heights of left subtree and right subtree should not be
	more than one

	I/p:   18
		  /   \
	     4	  20
	 		 /  \
	 		13  70

	O/p: Yes

	I/p:
	 	3
	   /
	  4
	 /
	5

	O/p: No

	I/p:
			3
		   /  \
		  4    8
		 / \    \
		5   9    7
				 /
				6

	O/p: No



*/


