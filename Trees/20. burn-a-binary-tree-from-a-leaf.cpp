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
int res = 0;
int burnTime(Node *root, int leaf, int &dist)
{
	if (root == NULL) return 0;
	if (root -> data == leaf) { dist = 0; return 1; }
	int ldist = -1, rdist = -1;
	int lh = burnTime(root -> left, leaf, ldist);
	int rh = burnTime(root -> right, leaf, rdist);
	if (ldist != -1)
	{
		dist = ldist + 1;
		res = max(res, dist + rh);
	}
	else if (rdist != -1)
	{
		dist = rdist + 1;
		res = max(res, dist + lh);
	}
	return max(lh, rh) + 1;
}

// Things done
// 1. return height
// 2. set dist if given leaf is a desendant.




int main() {
	inputOutput();


	return 0;

}

/*
	Burn a Binary Tree from a leaf
	-> farthest node from the given node



	I/p: 10
		/  \
	   20  30
	  /  \   \
	 40  50  60

	leaf = 50
	O/p: 4


	The farthest node must be readable through one of the ancestors
	(50, 30, 20 and 10)

					10
				   /
				  20
				 /  \
				30   5
			   /  \
			  40  50
			 /
			60
		   /
		  70

		  leaf = 50

		  D through 50 = 0
		  D through 30 = 4
		  D through 20 = 3
		  D through 10 = 3



*/


