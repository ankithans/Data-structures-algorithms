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


// time : O(n^2)
int preIndex = 0;
Node *cTree(int in[], int pre[], int is, int ie)
{
	if (is > ie) return NULL;
	Node *root = new Node(pre[preIndex++]);

	int inIndex;
	for (int i = is; i <= ie; i++)
		if (in[i] == root -> key) { inIndex = i; break; }

	root -> left = cTree(in, pre, is, inIndex - 1);
	root -> right = cTree(in, pre, inIndex + 1, ie);
	return root;
}




int main() {
	inputOutput();


	return 0;

}

/*
	Construct Binary tree from inorder and preorder

	I/p: in[] = { 20, 10, 30 }
		pre[] = { 10, 20, 30 }

	O/p: Root of the below tree

			10
		   /  \
		  20  30

	I/p: in[] = { 40, 20, 50, 10, 30, 80, 70, 90 }
		pre[] = { 10, 20, 40, 50, 30, 70, 80, 90 }

	O/p: Root of the below tree

			10
		   /  \
		  20  30
		 / \    \
		40 50   70
			   /  \
			  80  90
*/


