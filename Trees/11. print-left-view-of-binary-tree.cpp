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
int maxLevel = 0;
void printLeft(Node *root, int level)
{
	if (root == NULL) return;
	if (maxLevel < level)
	{
		cout << root -> key << " ";
		maxLevel = level;
	}
	printLeft(root -> left, level + 1);
	printLeft(root -> right, level + 1);
}
void printLeftView(Node *root)
{
	printLeft(root, 1);
}


// iterative
void printLeft(Node *root)
{
	if (root == NULL) return;
	queue<Node *> q;  q.push(root);
	while (q.empty() == false)
	{
		int count = q.size();
		for (int i = 0; i < count; i++)
		{
			Node *curr = q.top();
			q.pop();
			if (i == 0)
				cout << (curr -> key) << " ";
			if (curr -> left != NULL)
				q.push(curr -> left);
			if (curr -> right != NULL)
				q.push(curr -> right);
		}
	}
}




int main() {
	inputOutput();


	return 0;

}

/*
	Print Nodes at distance k

	I/p:  10
		/     \
	   20	  30
	 /  \       \
    40  50       70

	O/p: 10 20 40

	I/p:
	 	10
	   /  \
	  50  60
	  	 /  \
	  	70  20
	  	\
	  	 8

	O/p: 10 50 70 8



*/


