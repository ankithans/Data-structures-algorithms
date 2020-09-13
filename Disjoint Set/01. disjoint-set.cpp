#include <bits/stdc++.h>
using namespace std;


void inputOutput() {
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
}


/*
	I/p: n = 4
	makeFriends(0, 1), makeFriends(1, 3), areFriends(0, 2)
	areFriends(0,1), areFriends(0, 3)

	O/p: No Yes Yes

	Use Adjacency List or Adjacency matrix representation
	Adjacency List: makeFriends() and areFriends() are O(n)
	Adjacency Matrix: makeFriends() O(n) and areFriends in O(1)


	Better Solution (Disjoint Set)

	find(x) : Returns a representative of x's set(or social network)
	union(x, y) : Combine sets of x and y
					(same as makeFriends())

	bool areFriends(x, y)
	{
		return (find(x) == find(y));
	}
	makeFriends(x, y)
	{
		union(x, y);
	}


	Union and Find Operations
	n = 5
	0 1 2 3 4

	1. union(0, 2)
		0,2	  1,   3,   4
		Now find(0) and find(2) should return same value.

	2. union(2, 4)
		0,2,4,	 1,   3
		Now find(0), find(2) and find(4) should return same value.

	3. union(1, 3)
		0,2,4   1,3
		Now find(1) and find(3) should return same value.



	Simple Implementation :
	int parent[n];
	void initialize()
	{
	for(int i = 0; i < n; i++)
		parent[i] = i;
	}
	int find(int x)
	{
		if(parent[x] == x)
			return x;
		else
			return find(parent[x]);
	}
	void union(int x, int y)
	{
		int x_rep = find(x);
		int y_rep = find(y);
		parent[y_rep] = x_rep;
	}




	==> Union by rank:

	int parent[n], rank[n];

	void initialize()
	{
		for(int i = 0; i < n; i++)
		{
			parent[i] = i;
			rank[i] = 0;
		}
	}
	void union(int x, int y)
	{
		int x_rep = find(x), y_rep = find(y);
		if(x_rep == y_rep) return;

		if(rank[x_rep] < rank[y_rep]) parent[x_rep] = y_rep;
		else if(rank[y_rep] < rank[x_rep]) parent[y_rep] = x_rep;
		else { parent[y_rep] = x_rep; rank[x_rep]++; }
	}


	avg time : O(logn)


	==> Path Compression :
		here we might change the tree

		// Find with Path Compressison
		int find(int x)
		{
			if(x == parent[x])
				return x;
			parent[x] = find(parent[x]);
			return parent[x];
		}

		// simple find
		int find(int x)
		{
			if(x == parent[x])
				return x;
			else
				return find(parent[x]);
		}

		Time Complexity with union by rank and path compression
			For m operations on n elements
				O(m ∝(n))
				∝(n) <= 4
				∝(n) is Inverse Ackermann function


*/


int main() {
	inputOutput();



	return 0;
}



