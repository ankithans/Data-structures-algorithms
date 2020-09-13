#include <bits/stdc++.h>
using namespace std;


void inputOutput() {
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
}


/*
	Cycle Detection in Directed Graph using Kahn's Algorithm

	I/p: 	0------>1
			<\	    /
			  \    /
			   \ </
				2------>3
	Yes

	1. Store indegree of every vertex.
	2. Create a Queue, q
	3. Add all 0 indegree vertices to the q
	4. count = 0;
	5. while (q is not empty)
	   {
			a. u = q.pop();
			b. For every adjacent v of u
				i.  Reduce indegree of v by 1.
				ii. If indegree of v becomes 0, add v to the q.
			c. count++;
	   }
	6. return (count != v)
*/



int main() {
	inputOutput();


	return 0;
}



