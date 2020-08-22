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
void printKDist(Node *root, int k)
{
	if (root == NULL) return;
	if (k == 0) { cout << root -> key << " "; }
	else {
		printKDist(root -> left, k - 1);
		printKDist(root -> right, k - 1);
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

	O/p: 40 50 70



*/


