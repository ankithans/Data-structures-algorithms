#include <bits/stdc++.h>
using namespace std;


void inputOutput() {
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
}

/*
	Dijkstra's Shortest Path Algorithm

	Problem : Given a weighted graph and a source, find shortest distances
			  from the source to all other vertices.

	I/p: Graph     B
				5 /| \ 20
  				 / |3 \
				A  |   D
   				 \ |  / 2
			  10  \C /
	O/p:
			A 	0
			B 	5
			C 	8
			D 	10

	Intersting facts/Questions:
		1. Does not work for negative weight edges.
					4
				A-------B
				 \	   /
				5 \   / -10
				   \ /
					C
		2. Does the shortest path change if add a weight to all edges of the
			orignal graph?

		3. Implementation :

		Disktra(s)
			1. Create an empty Priority Queue(or min heap), pq.
			2. dist[v] = { a, a, ......a }
			3. dist[s] = 0
			4. Insert all distance into pq.
			5. while(pq.empty() == false)
				{
					u = pq.extarct_min();
					Relax all adjacent of u that are not in pq.
				}
		Time Complexity : O(vlogv + Elogv)
*/




int main() {
	inputOutput();


	return 0;
}



