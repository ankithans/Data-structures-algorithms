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


// Method 1. time : O(n)
void printSpiral(Node *root)
{
	if (root == NULL) return;
	queue<Node *> q;
	stack<int> s;
	bool reverse = false;
	q.push(root);
	while (q.empty() == false)
	{
		int count = q.size();
		for (int i = 0; i < count; i++)
		{
			Node *curr = q.front(); q.pop();
			if (reverse)
				s.push(curr -> key);
			else
				cout << curr -> key << " ";

			if (curr -> left != NULL) q.push(curr -> left);
			if (curr -> right != NULL) q.push(curr -> right);
		}
		if (reverse)
		{
			while (s.empty() == false)
			{
				cout << s.top() << " ";
				s.pop();
			}
		}
		reverse = !reverse;
		// cout << endl; // for printing evry level in new line
	}
}


// Method 2.
/*
	use 2 stacks;
	1. Push root to the stack s1.
	2. While any of the two stacks is not empty
		while N is not empty
			a. Take out a node, print it.
			b. Push children of the taken out node into s2
		while s is not empty
			a. Take out a node, print it.
			b. Push children of the taken out node into s1.
*/




int main() {
	inputOutput();


	return 0;

}

/*
	Tree traversal in spiral form

	I/p:     1
		   /   \
		  2     3
		/  \   /  \
	   4   5  6    7
	  / \    /
	 8   9  10

	O/p: 1 3 2 4 5 6 7 10 9 8


*/


