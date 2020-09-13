#include <bits/stdc++.h>
using namespace std;


void inputOutput() {
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
}

/*
	Connected Components - Kosaraju's Algorithm

	I/p: 	A----->B------>D
			\<	  /		   |
		     \   /		   |
			  \	/<         |<
			   C 		   E
	O/p: ABC
		 D
		 E

		Two DFS Traversals :
		1. First find the vertices in decreasing order of their finish times
		2. Reverse the graph edges
		3. Now consider the vertices in order found in step 1 and
			print reachable vertices from every vertex as one connected
			component.
*/




int main() {
	inputOutput();


	return 0;
}



