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


/*
	Find the following value for every node and return the maximum
	max(1 + lh + rh)
	lh -> left height
	rh -> right height
*/
// Naive Solution : O(n^2)
int height(Node *root)
{
	if (root == NULL) return 0;
	else
		return 1 + max(height(root -> left,
		                      root -> right));
}
int diameter(Node *root)
{
	if (root == NULL) return 0;
	int d1 = 1 + height(root -> left) + height(root -> right);
	int d2 = diameter(root -> left);
	int d3 = diameter(root -> right);
	return max(d1, max(d2, d3));
}


// better O(n)
/*
	precompute heights of the nodes in the binary tree
	unordered_map<Node *, int>

*/


// efficient O(n)
/*
	no overhead of map
	modify the height funct

	//  this function returns height, but sets the "res" variable
		to have diameter.
*/
int res = 0;
int height(Node *root)
{
	if (root == NULL) return 0;
	int lh = height(root -> left);
	int rh = height(root -> right);
	res = max(res, lh + rh + 1);
	return 1 + max(lh, rh);
}



int main() {
	inputOutput();


	return 0;

}

/*
	Diameter of Binary Tree
	longest path b/w two leaf nodes

	I/p:     10
		   /   \
		 20     30
			   /  \
  			  40   50
  			 /
  			60


	O/p: 5


*/


