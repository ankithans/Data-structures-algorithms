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
// space : O(n)
void printlevel(Node *root)
{
	if (root == NULL) return;
	queue<Node*> q;
	q.push(root);
	while (q.empty() == false)
	{
		Node *curr = q.front();
		q.pop();
		cout << curr -> key << " ";
		if (curr -> left != NULL)
			q.push(curr -> left);
		if (curr -> right != NULL)
			q.push(curr -> right);
	}
}


int main() {
	inputOutput();


	return 0;

}


