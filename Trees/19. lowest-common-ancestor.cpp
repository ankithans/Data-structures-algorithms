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


// Naive solution
/*
	Build two path arrays
	path1 -> path from root to first node
	path2 -> path from root to second node
	last common node is LCA
*/
bool findPath(Node *root, vector<Node *> p, int n) // time O(n)
{
	if (root == NULL) return false;
	p.push_back(root);
	if (root -> key == n) return true;
	if (findPath(root -> left, p, n) ||
	        findPath(root -> right, p, n))
		return true;
	p.pop_back();
	return false;
}
Node *LCA(Node *root, int n1m int n2) // time O(n)
{
	vector<Node *> path1, path2;
	if (findPath(root, path1, n1) == false ||
	        findPath(root, path2, n2) == false)
		return NULL;
	for (int i = 0; i < path1.size() - 1 && i < path2.size() - 1; i++)
		if (path1[i + 1] != path2[i + 1])
			return path[i];
	return NULL;
}


// one traversal of binary tree
/*
	1. Require one traversal and O(n) extra space for the recursive traversal.
	2. Assume that both n1 & n2 exist in the tree. Donot give correct
	result when only (n1 or n2) exists.

	Idea :
		We do normal recursive traversal. We have the following
		cases for every node.

		1. If it is same as n1 or n2.
		2. If one of its subtrees contains n1 and other contains n2.
		3. If one of its subtrees contains both n1 & n2.
		4. If none of its subtrees conatains any of n1 & n2.

		10
	   /  \					Examples of above cases :
	  20  30 				1. n1 = 10, n2 = 40, curr_node = 10
	     /  \				2. n1 = 80, n2 = 40, curr_node = 60
	    50   60      	 	3. n1 = 80, n2 = 40, curr_node = 30 or 10
	   /    /  \			4. n1 = 80, n2 = 40, curr_node = 20
	  70   80  90
	  			 \
	  			 40
*/
// time : O(n)
// space : O(h)
Node *LCA(Node *root, int n1, int n2)
{
	if (root == NULL) return NULL;
	if (root -> key == n1 || root -> key == n2)
		return root;

	Node *LCA1 = LCA(root -> left, n1, n2);
	Node *LCA2 = LCA(root -> right, n1, n2);

	if (LCA1 != NULL && LCA2 != NULL)
		return root;

	if (LCA1 != NULL)
		return LCA1;
	else
		return LCA2;
}




int main() {
	inputOutput();


	return 0;

}

/*
	Lowest(level) Common Ancestor

	I/p:     10
		   /   \
		 20     30
			   /  \
  			  40   50
  			 /	  /  \
  			60   70   80

  		n1 = 60
  		n2 = 70

	O/p: 30

	more examples in the same tree
		LCA(20, 80) = 10
		LCA(80, 30) = 30
		LCA(70, 80) = 50


*/


