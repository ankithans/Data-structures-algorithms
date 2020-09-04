#include <bits/stdc++.h>
using namespace std;


void inputOutput() {
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
}


// naive O(n) for k-th smallest element
// k = 3
/*
			50
		   /   \
		  20   100
		 /  \   /  \
		10  40 70  120
		      /  \
		     60  80
*/
int count = 0;
void printkth(root, k)
{
	if (root is not NULL)
	{
		printkth(root -> left, k);
		count++;
		if (count == k)
		{
			print(root -> key, k);
			return ;
		}
		printkth(root -> right);
	}
}

// efficient
struct Node {
	int key;
	Node *left, *right;
	int lCount;
	Node(int x)
	{
		key = x;
		left = NULL;
		right = NULL;
		lCount = 0;
	}
}
/*
	Compare (lcount + 1) with k
	1. If same, return root.
	2. If greater, recur for left subtree with same k
	3. If smaller, recur for right subtree with k as (k - lcount - 1)

	How do we maintain lCount during insertion/deletion.
*/


int main() {
	inputOutput();

	return 0;
}


/*
	Design a data structure that allows following operations efficiently
	1. search
	2. insert
	3. delete
	4. k-th smallest element

	Example :
	I/p: Insert(10), Insert(5), Insert(15), Insert(20), Insert(2)
		 kthSmallest(3) // k = 3
	O/p: 10

*/