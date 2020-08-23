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
// space : O(w)
int maxWidth(Node *root)
{
	if (root == NULL) return 0;
	queue<Node *> q;
	q.push(root);
	int res = 0;
	while (q.empty() == false)
	{
		int count = q.size();
		res = max(res, count);
		for (int i = 0; i < count; i++)
		{
			Node *curr = q.top();
			q.pop();
			if (curr -> left != NULL)
				q.push(curr -> left);
			if (curr -> right != NULL)
				q.push(curr -> right);
		}
	}
	return res;
}



int main() {
	inputOutput();


	return 0;

}

/*
	Maximum width of Binary Tree

	I/p:   10
		  /   \
	     20	  30
	 	/	 /  \
	   40   50  60
	  /
	 80

	O/p: 3

	I/p:
	 	10
	   /
	  80
	  \
	   70

	O/p: 1

	I/p:
			  8
		   /     \
		  30      20
		 / \     /  \
		90  100 70  300

	O/p: 4



*/


