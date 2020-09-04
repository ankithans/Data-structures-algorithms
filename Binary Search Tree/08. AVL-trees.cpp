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





int main() {
	inputOutput();


	return 0;
}

/*

	AVL Tree

	1. It is a BST (for every node, left subtree is smaller and right greater)
	2. It is balanaced(For every node, difference b/w left and
		right heights does not exceeds one)

		Balance Factor : |lh - rh|
		Balance Factor <= 1


		18			18
	   /  \		    /
	  6   20       12
	 /    /       /
	2    19  	 19
	AVL Tree	Not an AVL Tree


	Insert Operation
		1. Perform normal BST insert
		2. Traverse all ancestors of the newly inserted node from
			the node to root.
		3. If find an unbalanced node check for any of the below cases
			1. Left left 	Single Rotation
			2. Right Right 	Single Rotation
			3. Left Right 	Double Rotation
			4. Right Left 	Double Rotation		Insert : 20, 15, 5, 40, 50, 18

		20	20	  20 	 15		 15		   	15           15			15
			/	  /	    /  \    /  \	   /  \			/  \       /  \
		   15	 15	   5   20  5   20     5   20	   5   40     5   40
		   		 /					 \	        \         /  \       /  \
		   		5  			         40         40       20   50    20  50
		   										  \                /
		   										   50             18


																	15
																   /  \
																  5	   20
																	  /  \
																	 18  40
																	      \
																	       50


*/

