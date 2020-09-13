#include <bits/stdc++.h>
using namespace std;


void inputOutput() {
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
}

/*
	Minimum spanning tree!

		5m
	A------D				A-----D
	| \    |					  |
9m	|  \10m|					  |
	|   \  | 7m				      |
	|    \ | 				B-----C
	B------C
	   8m

	Given a weighted and connected undirected graph
	minimize the wire length and make sure that all computers are connected
	to each other may be through intermediate computers.

	Given a weighted, undirected and connected graph, find min
	spanning tree of it.

	if v vertices then v - 1 edges should be there in spanning tree

*/



int main() {
	inputOutput();


	return 0;
}



