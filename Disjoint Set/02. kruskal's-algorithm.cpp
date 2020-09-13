#include <bits/stdc++.h>
using namespace std;


void inputOutput() {
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
}


/*
	Kruskal's Algorithm
		1. Sort all edges in increasing order of weights
		2. Initialize : MST = {  }, res = 0
		3. Do following for every edge 'e' while MST size does not become
			v - 1
				a. If adding e to MST does not cause a cycle
					MST = MST U { e }
					res = res + e.weight
		4. return res;

	Implementation :
		simple: Create a seperate graph for MST

		struct Edge
		{
			int src, dist, wt;
			Edge(int s, int d, int w)
			{ src = s; dist = d; wt = w; }
		};
		bool myComp(Edge e1, Edge e2)
		{
			return e1.wt < e2.wt;
		}

		int parent[v], rank[v];
		int kruskal(Edge arr[])
		{
			sort(arr, arr + E, myComp);
			for(int i = 0; i < v; i++)
			{ parent[i] = i; rank[i] = 0; }

			int res = 0;
			for(int i = 0, s = 0; s < v - 1; i++)
			{
				Edge e = arr[i];
				int x = find(e.src);
				int y = find(e.dist);
				if(x != y)
				{
					res += e.et;
					Union(x, y);
					s++;
				}
			}
			return res;
		}

		i: Index of next edge
		s: current size of MST
		v: Total no of vertices
		E: TotaL no of edges
		find() and union() have standard implementations


		time complexity : O(ElogE + V + E) = O(ElogE)
		Aux space : O(V)
*/


int main() {
	inputOutput();



	return 0;
}



