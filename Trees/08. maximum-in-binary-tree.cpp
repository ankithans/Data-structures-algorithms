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
int getMax(Node *root)
{
	if (root == NULL)
		return INT_MIN;
	else
		return max(root -> key, max(getMax(root -> left),
		                            getMax(root -> right)));
}



int main() {
	inputOutput();


	return 0;

}

/*
	Maximum in binary tree

	I/p:   10
		/     \
	   30	  40
	  /	      /  \
	 80      60  20
	  \
	   70

	O/p: 80



*/


