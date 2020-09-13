#include <bits/stdc++.h>
using namespace std;


void inputOutput() {
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
}


/*
	Detect Cycle in an undirected graph

	I/p:  0-----1----2
				|   /
				|  /
				| /
				3
	O/p: Yes
*/
// O(V + E)
DFSRec(adj, s, visited, parent)
{
	visited[s] = true;
	for (every adjacent u of s)
	{
		if (visited[u] == false)
			if (DFSRec(adj, u, visited, s) == true)
				return true;
			else if (u != parent)
				return true;
	}
}
DFS(adj, v)
{
	visited[v] = { false, false, ... false };
	for (int i = 0; i < v; i++)
		if (visited[i] == false)
			if (DFSRec(adj, i, visited, -1) == true)
				return true;
	return false;
}



int main() {
	inputOutput();


	return 0;
}



