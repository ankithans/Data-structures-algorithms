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
// space : O(h + 1) = O(h)
void preorder(Node *root)
{
	if (root != NULL)
	{
		cout << root -> key << " ";
		preorder(root -> left);
		preorder(root -> right);
	}
}


int main() {
	inputOutput();


	return 0;

}


