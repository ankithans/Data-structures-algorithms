#include <bits/stdc++.h>
using namespace std;


void inputOutput() {
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
}


/*
	Topological Sorting

	I/p: 	0
		  /   \
		  >1  2<
	O/p: 0 1 2

	I/p: 	0	    1
		  /	  \	  /   \
		  >2   >3<	 4<
	O/p: 0 1 2 3 4


		 	0 0	    1 0
		  /	  \	  /   \
		  >2--->3<	 4<
		   1    3    1

	BFS Based Solution :
	1. Store indegree of every vertex.
	2. Create a Queue, q
	3. Add all 0 indegree vertices to the q
	4. while (q is not empty)
	   {
			a. u = q.pop();
			b. print u;
			c. For every adjacent v of u
				i.  Reduce indegree of v by 1.
				ii. If indegree of v becomes 0, add v to the q.
	   }
*/

vector<int> adj[MAX];
int indegree[MAX]; // initially 0 for all
void toposort(int V, int E[][2], int e)
{
	for (int i = 0; i < e; i++)
	{
		int v1 = E[i][0];
		int v2 = E[i][1];
		adj[v1].push_back(v2);
		indegree[v2]++;
	}
	queue<int> Q; // empty
	for (int i = 0; i <= V; i++)
	{
		if (indegree[i] == 0)
			Q.push(i);
	}
	vector<int> topo_sort_list;
	while (Q.empty() == false)
	{
		int curr = Q.front();
		Q.pop();
		topo_sort_list.push_back(curr);
		for (auto next : adj[curr])
		{
			indegree[next]--;
			if (indegree[next] == 0)
				Q.push(next);
		}
	}
	if (topo_sort_list.size() != V)
		THROW_ERROR;
	for (auto u : topo_sort_list)
		cout << u << " ";
}



int main() {
	inputOutput();


	return 0;
}



