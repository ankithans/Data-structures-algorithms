#include <bits/stdc++.h>
using namespace std;


void inputOutput() {
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
}


/*
	Breadth First Search (BFS)

	First Version : Given an unordered graph and a source vector 's'
					print BFS from given source.

	I/p: 		0
			  /   \
			 1	   2
			 	  / \
			 	 3   4
		s = 0
	O/p: 0 1 2 3 4


	I/p: 		1
			  / | \
			 0  |  3
			  \	| /
			 	2
		s = 0
	O/p: 0 1 2 3


	I/p: 		1-----3
			   /	   \
			  0---------5
			   \	   /
			   	2-----4
		s = 0
	O/p: 0 1 2 5 3 4

*/


void BFS(vector<int> adj[], int v, int s)
{
	bool visited[v + 1];
	for (int i = 0; i < v; i++)
		visited[i] = false;
	queue<int> q;
	visited[s] = true;
	q.push(s);
	while (q.empty() == false)
	{
		int u = q.front();
		q.pop();
		cout << u << " ";
		for (int v : adj[u])
		{
			if (visited[v] == false)
			{
				visited[v] = true;
				q.push(v);
			}
		}
	}
}

/*
	second version : No source given and graph may be disconnecting

				1			4
			  / | \		   / \
			 0  |  3	  5---6
			  \	| /
			 	2

*/
void BFS(vector<int> adj[], int v, int s, bool visited[])
{
	queue<int> q;
	visited[s] = true;
	q.push(s);
	while (q.empty() == false)
	{
		int u = q.front();
		q.pop();
		cout << u << " ";
		for (int v : adj[u])
		{
			if (visited[v] == false)
			{
				visited[v] = true;
				q.push(v);
			}
		}
	}
}
void BFSDis(vector<int> adj[], int v)
{
	bool visited[v + 1];
	for (int i = 0; i < v; i++)
		visited[i] = false;
	for (int i = 0; i < v; i++)
		if (visited[i] == false)
			BFS(adj, i, visited);
}


/*
	Time Complexity : O(V + E)
*/

/*
	Counting Connected compenents in an undirected graph
	or print number islands in a graph

	I/p: 	0		3		5
		  /   \		|	  /   \
		 1-----2  	4	 6	   7
		 					   |
		 					   8
	O/p: 3
*/
int BFSDis(vector<int> adj[], int v)
{
	int count = 0;
	bool visited[v + 1];
	for (int i = 0; i < v; i++)
		visited[i] = false;
	for (int i = 0; i < v; i++)
		if (visited[i] == false)
		{
			BFS(adj, i, visited);
			count++;
		}
	return count;
}

/*
	Application of BFS

		1. Shortest Path in an unweighted graph.
		2. Crawlers in Search Engines.
		3. Peer to Peer Networks.
		4. Social Networking Search
		5. In Garbage Collection (cheney's Algorithm)
		6. Cycle Detection
		7. Ford Fulkerson Algorithm
		8. Broadcasting
*/


int main() {
	inputOutput();


	return 0;
}



