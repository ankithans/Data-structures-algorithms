#include <bits/stdc++.h>
using namespace std;


void inputOutput() {
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
}

/*
	Depth First Search (DFS) -->

	I/p: 	0
		  /   \
		 1	   4
		 |	 /	 \
		 2	5-----6
		 |
		 3
	s = 0
	O/p: 0 1 2 3 4 5 6


	I/p: 	0----1----4----5
			|	 |
			|	 |
			2----3
	s = 0
	O/p: 0 1 3 2 4 5
*/
void DFSRec(vector<int> adj[], int s, bool visited[])
{
	visited[s] = true;
	cout << s << " ";
	for (int u : adj[s])
		if (visited[u] == false)
			DFSRec(adj, u, visited);
}
void DFS(vector<int> adj[], int v, int s)
{
	bool visited[v];
	for (int i = 0; i < v; i++)
		vector[i] = false;
	DFS(adj, s);
}


/*
	Disconnected Graphs

		0		3
		| \		|
		|  2	|
		| /		4
		1
*/
void DFSRec(vector<int> adj[], int s, bool visited[])
{
	visited[s] = true;
	cout << s << " ";
	for (int u : adj[s])
		if (visited[u] == false)
			DFSRec(adj, u, visited);
}
void DFS(vector<int> adj[], int v)
{
	bool visited[v];
	for (int i = 0; i < v; i++)
		visited[i] = false;
	for (int i = 0; i < v; i++)
		if (visited[i] == false)
			DFSRec(adj, i, visited);
}

/*
	counted connected components in an undirectional graph
*/
int DFS(vector<int> adj[], int v)
{
	int count = 0;
	bool visited[v];
	for (int i = 0; i < v; i++)
		visited[i] = false;
	for (int i = 0; i < v; i++)
		if (visited[i] == false)
		{
			DFSRec(adj, i, visited);
			count++;
		}
	return count;
}

// time complexity : O(V + E)

/*
	Advantages DFS :
		1. Cycle Detection
		2. Topological Sorting
		3. Strongly connected components
		4. Solving maze and similar puzzles
		5. Path Finding
*/


int main() {
	inputOutput();


	return 0;
}



