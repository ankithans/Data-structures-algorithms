#include <bits/stdc++.h>
using namespace std;


void inputOutput() {
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
}

/*
	for an array

	prev = -∞, first = NULL, second = NULL
	for(i = 0; i < n; i++)
	{
		if(arr[i] < prev)
		{
			if(first == NULL)
				first = prev;
			second = arr[i];
		}
		prev = arr[i];
	}
*/
// O(n)
Node *prev = NULL, *first = NULL, *second = NULL;

void fixBST(Node *root)
{
	if (root == NULL) return;
	fixBST(root -> left);
	if (prev != NULL && root -> key < prev -> key)
	{
		if (first == NULL)
			first = prev;
		second = root;
	}
	prev = root;
	fixBST(root -> right);
}
// then just swap first and second




int main() {
	inputOutput();

	return 0;
}


/*
	Fix a BST with two Nodes swapped

	I/p:  20
		 /  \
		60  80
	   / \  / \
	  4  10 8 100

	O/p:  20
		 /  \
		8   80
	   / \  / \
	  4  10 60 100

	  	I/p:  60
			 /  \
			8   80
		   / \  / \
		  4  10 20 100

	O/p:  20
		 /  \
		8   80
	   / \  / \
	  4  10 60 100

*/