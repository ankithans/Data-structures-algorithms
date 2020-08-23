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
Node *prev = NULL;
Node *BTToDLL(Node *root)
{
	if (root == NULL) return root;
	Node *head = BTToDLL(root -> left);
	if (prev == NULL) head = root;
	else { root -> left = prev; prev -> right = root; }
	prev = root;
	BTToDLL(root -> right);
	return head;
}


int main() {
	inputOutput();


	return 0;

}

/*
	Convert Binary tree to DLL in place - inorder traversal

	I/p:   10
		  /   \
	     5	  20
	 		 /  \
	        30  35

	O/p: 5 -> 10 -> 30 -> 20 -> 35
		   <-	 <-    <-    <-


*/


