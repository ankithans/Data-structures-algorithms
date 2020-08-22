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


// Time : O(n + h) = O(n)
// space : O(n)
void printLevelOrderLine(Node *root)
{
	if (root == NULL) return;
	queue<Node*> q;
	q.push(root);
	q.push(NULL);
	while (q.size() > 1)
	{
		Node *curr = q.top();
		q.pop();
		if (curr == NULL)
		{
			cout << "\n";
			q.push(NULL);
			continue;
		}
		cout << curr -> key << " ";

		if (curr -> size != NULL) q.push(curr -> left);
		if (curr -> right != NULL) q.push(curr -> right);
	}
}

// method 2 :
// time : O(n)
// space : O(n)
void printLevelOrderLine(Node *root)
{
	if (root == NULL) return;
	queue<Node*> q;
	q.push(root);
	while (q.empty() == false)
	{
		int count = q.size();
		for (int i = 0; i < count; i++)
		{
			Node *curr = q.top();
			q.pop();
			cout << curr -> key << " ";
			if (curr -> left != NULL) q.push(curr -> left);
			if (curr -> right != NULL) q.push(curr -> right);

		}
		cout << "\n";
	}
}


int main() {
	inputOutput();


	return 0;

}


