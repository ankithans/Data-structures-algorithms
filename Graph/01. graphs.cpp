#include <bits/stdc++.h>
using namespace std;


void inputOutput() {
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
}

/*
	G = (V, E)

	Directed Graph	(DAG)			Indireted graph
	sum of indegrees = |E|			sum of degrees = 2 * |E|
	sum of outdegrees = |E|			Max number of edges = (|V| * (|V| - 1)) / 2
	Max number of edges = |V| * (|V| - 1)

		v1 ---- v3
		|		|   \
		|		|	v5
		|		|   /
		v2 ---- v4

(Path)				Wall : v1, v2, v4, v2
(Simple Path)		Path : v1, v2, v4 (walk with no repeated vertices)
					Cyclic : There exists a walk that begin and ends
								with the same index.
					Acyclic :

	Weighted and UnWeighted graphs
*/

/*
	Adjacency Matrix
	Adjacency Lists


	 0 						0 1 2 3
	 | \				  0	0 1 1 0
	 |  2 ---- 3		  1	1 0 1 0
	 | /				  2	1 1 0 1
	 1  				  3 0 0 1 0
	      				Symmetric matrix in undirected graphs
	Size of matrix = |V| * |V|
	|V| => Number of vertices

	max[i][j] = 1	if there i an edge from vertex i to vertex j
				0	otherwise


	For the efficient implementation, one hash table h would
	 also be required to do reverse mapping

	 	h{ABC} = 0
	 	h{BCD} = 1
	 	h{CDE} = 2
	 	h{EFG} = 3

	Properties of Adjacency Matrix Representation
		space required : O(v * v)
		operations :
			check if u and v are adjacent :  O(1)
			Find all vertices adjacent to u : O(v)
			Find degree of u : O(v)
			Add/Remove an Edge : O(1)
			Add/Remove a vectex : O(v^2)


	Adjacency List : Arrays of lists

		1					0 1-2
	  /	|					1 0-2
 	 0	|  3				2 0-1-3
	  \	| /					3 2
		2

		An array of lists where lists are most popularly represented as
			a. Dynamic Sized Array
			b. Linked Lists

		operations :
			Check if there is an edge from u to v : O(v)
			Find all adjacent of u : O(degree(u))
			Find degree of u : O(1)
			Add an edge : O(1)
			Remove an edge : O(v)

	Comparision of Adjacency List and Adjacency Matrix

								list 				Matrix

		Memory					O(V + E)			O(V * V)

		check if there is 		O(v)				O(1)
		an edge from u to v

		Find all the adjacents	O(degree(u))		O(v)
		of u

		Add an Edge 			O(1)				O(1)

		Remove an Edge 			O(v)				O(1)




*/

// Graph Adjacency List Representation in c++
void addEdge(vector<int> adj[], int u, int v)
{
	adj[u].push_back(v);
	adj[v].push_back(u);
}

void printGraph(vector<int> adj[], int v)
{
	for (int i = 0; i < v; i++)
	{
		for (int x : adj[i])
			cout << x << " ";
		cout << "\n";
	}
}

int main() {
	inputOutput();

	int v = 4;
	vector<int> adj[v];
	addEdge(adj, 0, 1);
	addEdge(adj, 0, 2);
	addEdge(adj, 1, 2);
	addEdge(adj, 1, 3);
	printGraph(adj, v);


	return 0;
}



