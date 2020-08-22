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


int main() {
	inputOutput();

	Node *root = new Node(10);
	root -> left = new Node(20);
	root -> right = new Node(30);
	root -> left -> left = new Node(40);


	return 0;

}


