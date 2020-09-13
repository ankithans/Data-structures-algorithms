#include <bits/stdc++.h>
using namespace std;


void inputOutput() {
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
}

/*
	shortest path in directed acyclic graph (DAG)

				2	  3			6
	I/p:  	0----->1------>2------>3
			 \	  >/ 			  /
			 1\   / 2            / 1
			   \>4------------->5
	source = 0			4
	O/p: 0 2 3 6 1 5

			1	  3		4
	I/p: 0---->1---->2---->3
			   |-----------|
					2
	source = 1
	O/p: INF 0 3 2


	shortestPath(adj, s)
		1. Initialize dist[v] = { INF, INF, ...... INF }
		2. dist[s] = 0;
		3. Find a topological sort of the graph
		4. For every vertext u in the topological sort
			a. For every element v of u
				if dist[v] > dist[u] + weight(u, v)
					dist[v] = dist[u] + weight(u, v);

	time : O(V + E)
*/



int main() {
	inputOutput();


	return 0;
}



