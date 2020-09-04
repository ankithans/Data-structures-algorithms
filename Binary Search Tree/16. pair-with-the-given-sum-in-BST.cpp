#include <bits/stdc++.h>
using namespace std;


void inputOutput() {
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
}

/*
	Method 1 : (Inorder Traversal)
	// Time : O(n) - 2 O(n) steps
	// Aux space : O(n + h) space -> O(n)
		1. Do an Inorder Travesal of the given BST and store it in an array
		2. Use two pointer approach to find if array has a pair with given sum


	Method 2 : (Hashing)
		worst case time O(n)
*/
bool isPairSum(Node *root, int sum, unordered_set<int> &s)
{
	if (root == NULL) return false;
	if (isPairSum(root -> left, sum, s) == true)
		return true;
	if (s.find(sum - root -> key) != s.end())
		return true;
	else
		s.insert(root -> key);
	return isPairSum(root -> right, sum, s);
}




int main() {
	inputOutput();

	return 0;
}


/*
	Pair with given sum in BST

	I/p:  10
		 /  \
		8   20
	   / \  / \
	  4  9 11 30
	  		  /
	  		 25

	sum = 33
	O/p: Yes
	There is a pair (8, 25) with sum 33.


	  	I/p:  20
			 /  \
			8   40
		   	    /
			   35
	sum = 49
	O/p: No
	There is no pair with sum 49
*/