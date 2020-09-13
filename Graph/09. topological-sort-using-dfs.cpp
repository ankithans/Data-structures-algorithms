#include <bits/stdc++.h>
using namespace std;


void inputOutput() {
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
}

// time : O(V + E)
/*
	Toplological Sorting using DFS

	1. Create an empty stack st
	2. For every vertex u, do following
		if(u is not visited)
			DFS(u, st)
	3. While(st is not empty)
		pop an item from st and print it.


	DFS(u, st)
		1. Mark u as visited
		2. For every adjacent v of u
			if (v is not visited)
				DFS(v, st);
		3. Push u to st
*/


int main() {
	inputOutput();


	return 0;
}



