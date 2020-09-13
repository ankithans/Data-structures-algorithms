#include <bits/stdc++.h>
using namespace std;


void inputOutput() {
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
}


/*
				 |----------|
	I/p: 	0----1-----2----3
			|----------|
	source = 0
	O/p: 0 1 1 2

			|---------|
	I/p: 	0----2----4
			|    |    |
			|    |    |
			1----3----5
	source = 0
	O/p: 0 1 1 2 1 2


	// BFS ->> O(V + E)
	1. Initialize dist[v] = {INF, INF, ...... INF}
	2. dist[s] = 0
	3. Create a queue, q
	4. Initialize : visited[v] = { false, false, ..... false }
	5. q.push(s), visited[s] = true
	6. while(q is not empty)
		{
			u = q.pop();
			for every adjacent v of u
			{
				if(visted[v] == false)
				{
					dist[v] = dist[u] + 1;
					visited[v] = true;
					q.push(v);
				}
			}
		}
	7. Print dist[]

*/




int main() {
	inputOutput();


	return 0;
}



