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
	Node *left, *right;
	Node(int x)
	{
		key = x;
		left = right = NULL;
	}
};

int max_ans = 0;
void solve(Node *root, int curr_sum)
{
	if (root -> NULL)
		return;
	if (root -> left == NULL && root -> right == NULL)
		max_ans max(max_ans, curr_sum);
	if (root -> left != NULL)
		solve(root -> left, curr_sum + root -> left -> key);
	if (root -> right != NULL)
		solve(root -> right, curr_sum + root -> right -> key);
}

int maxSum(node *root)
{
	if (root == NULL) return 0; // corner case = given tree is empty
	return solve(root, root -> key);
}


/*
	You are given a binary tree with integer values at exact node
	(+ve -ve or 0). You have to find maximum sum path!
*/
int max_path_sum = INT_MIN;

int solve(Node *node)
{
	if (root == NULL)
		return;

	int left = solve(root -> left);
	int right = solve(root -> right);

	// We can include either left or right or just root!
	int max_single = max(max(left, root) + root -> key, root -> key);

	// second check => update path sum if its is l + r + root
	max_path_sum = max(max_path_sum, max(max_single, l + r + root -> key));

	return max_single;
}

int maxSumPath(Node *root)
{
	solve(root);
	return max_path_sum
}






int main() {
	inputOutput();


	return 0;
}

/*