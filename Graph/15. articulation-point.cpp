#include <bits/stdc++.h>
using namespace std;


void inputOutput() {
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
}

/*
	Articulation point : Removal of which and theri associated edges
	increases the no of connected components by more than 1.

	0-----2-----3
	|   /  \    |
	|  /    \   |
	| /	     \  |
	1          4

	2, 3 are articulation points


	1. if root of dfs tree has two children then it is an articulation point
	2. Discovery time and low value

*/




int main() {
	inputOutput();


	return 0;
}



