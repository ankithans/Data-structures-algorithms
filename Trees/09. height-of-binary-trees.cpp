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
int height(Node *root)
{
	if (root == NULL)
		return 0;
	else
		return max(height(root -> left), height(root -> right)) + 1;
}



int main() {
	inputOutput();


	return 0;

}

/*
	Maximum in binary tree

	I/p:  10
		/    \
	   8	 30
	   		/  \
	   	   40   50
	   	   		/
	   	   	   70

	O/p: 4



*/


