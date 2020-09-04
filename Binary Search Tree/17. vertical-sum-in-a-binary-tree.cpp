#include <bits/stdc++.h>
using namespace std;


void inputOutput() {
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
}


/*
	Solution
		1. Create a map that stores sum for a given horizontal distance
			mp[-3] = 40
			mp[-2] = 35
			mp[-1] = 15
			mp[0] = 30
			mp[1] = 100
			mp[2] = 80
		2. Traverse the mp and print values
			40 35 15 30 100 80
*/
// time : O(nlog(hd))
void vSumR(Node *root, int hd, map<int, int> mp)
{
	if (root == NULL) return;
	vSumR(root -> left, hd - 1, mp);
	mp[hd] += root -> data;
	vSumR(root -> right, hd + 1, mp);
}
void vSum(Node *root)
{
	map<int, int> mp;
	vSumR(root, 0, mp);
	for (auto sum : mp)
		cout << sum.second << " ";
}



int main() {
	inputOutput();

	return 0;
}


/*
	Vertical Sum in a Binary tree

	I/p:  10 0
		 /  \
	 -1 20  30 +1
	   / \
   -2 5  15 0

	O/p: 5 20 25 30


	I/p:      10 0
			 /  \
		 -1	15   25 +1
		   /  \
	  -2  35  20 0
		 /      \
	-3	40      75 +1
		          \
		          80 +2

	O/p: 40 35 15 30 100 80
*/