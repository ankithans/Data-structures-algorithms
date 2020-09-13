#include <bits/stdc++.h>
using namespace std;


void inputOutput() {
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
}

/*
	Bellman Ford Algorithm

	I/p:     B
		   />| \>
		  A  |  D
		   \>| />
		     C
	source A
	O/p: Distance[] = { 0, 1, -2, 1 }

	Idea : We find shortest paths that are of one edge length. Then
			shortest paths that are of two edge lenght and so on
	Algorithm : we relax all edges v - 1 times

	d[v] = { inf, inf, inf..... }
	d[s] = 0;
	for(count = 0; count < v - 1; count++)
		for every edge (u, v)
			if(d[v] > d[u] + weight(u, v))
				d[v] = d[u] + weight(u, v);
	for every edge (u, v)
		if(d[v] > d[u] + weight(u, 0))
			print("Negative weight cycle found");

	O(VE)
*/




int main() {
	inputOutput();


	return 0;
}



