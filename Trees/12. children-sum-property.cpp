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


// time : O(n)
// space : O(h)
bool isCSum(Node *root)
{
	if (root == NULL) return true;
	if (root -> left == NULL && root -> right == NULL)
		return true;

	int sum = 0;
	if (root -> left != NULL) { sum += root -> left -> key; }
	if (root -> right != NULL) { sum += root -> right -> key; }
	return (root -> key == sum &&
	        isCSum(root -> left) &&
	        isCSum(root -> right));
}



int main() {
	inputOutput();


	return 0;

}

/*
	Children Sum Property

	I/p:  20
		/     \
	   8	  12
	 /  \
    3   5

	O/p: Yes

	I/p:
	 	10
	   /  \
	  8   2
	  	 /
	  	2


	O/p: Yes



*/


