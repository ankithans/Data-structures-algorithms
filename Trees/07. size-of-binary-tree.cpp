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


// Time : O(n)
// space : O(h)
int getSize(Node *root)
{
	if (root == NULL)
		return 0;
	else
		return 1 + getSize(root -> left) + getSize(root -> right);
}



int main() {
	inputOutput();


	return 0;

}

/*
	size of binary tree

	I/p:  10
		/    \
	   80	 70
	  /	 \
	 30   40

	O/p: 5



*/


