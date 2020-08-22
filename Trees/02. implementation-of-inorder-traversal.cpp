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
void inorder(Node *root)
{
	if (root != NULL)
	{
		inorder(root -> left);
		cout << root -> key << " ";
		inorder(root -> right);
	}
}


int main() {
	inputOutput();


	return 0;

}


