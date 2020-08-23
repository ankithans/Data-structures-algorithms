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
Node *delNode(Node *root, int x)
{
	if (root == NULL) return root;
	if (root -> key > x)
		root -> left = delNode(root -> left, x);
	else if (root -> key < x)
		root -> right = delNode(root -> right, x);
	else
	{
		if (root -> left == NULL)
		{
			Node *temp = root -> right;
			delete root;
			return temp;
		}
		else if (root -> right == NULL)
		{
			Node *temp = root -> left;
			delete root;
			return temp;
		}
	}
}



int main() {
	inputOutput();


	return 0;

}

/*

	Deletion in BST

	I/p: x = 40

			 50
		   /    \
		  30     70
		 /  \   /  \
		20  40 60  80

	O/p:
			 50
		   /    \
		  30     70
		 /      /  \
		20     60  80


	I/p: 	x = 30

	         50
		   /    \
		  30     70
		 /      /  \
		20     60  80

	O/p:
	      	 50
		   /    \
		  20     70
		        /  \
		       60  80


    I/p:  x = 50 // replace with either closest smaller or closest greater value

    	     50
		   /    \
		  20     70
		        /  \
		       60  80

	O/p:

	         60
		   /    \
		  20     70
		          \
		           80



*/

