#include <bits/stdc++.h>
using namespace std;


void inputOutput() {
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
}


/*
	Detect cycle in a Directed graph using DFS

	I/p: 0------>1------>2
			     ^\     /
			       \   /
			        \ <
					 3
	O/p: Yes

	I/p: 0------>1<-------2
				  \      /
				   \    /
				    \></
				     3
	O/p: No
*/
// time complexity : O(V + E)
DFSRec(adj, s, visited[], recSt[])
{
	visited[s] = true;
	recSt[s] = true;
	for (every adjacent u of s)
	{
		if (visited[u] == false && DFSRec(adj, u, visited, recSt))
			return true;
		else if (recSt[u] == true)
			return true;
	}
	recSt[s] = false;
	return false;
}
DFS(adj, v)
{
	visited[v] = { false, false, ...false };
	recSt[v] = { false, false, ...false };
	for (int i = 0; i < v; i++)
		if (visited[i] == false)
			if (DFSRec(adj, i, visited, recSt) == true)
				return true;
	return false;
}




int main() {
	inputOutput();


	return 0;
}



