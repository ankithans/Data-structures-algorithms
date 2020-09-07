#include <bits/stdc++.h>
using namespace std;


void inputOutput() {
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
}

/*
	priority_queue in cpp

*/


int main() {
	inputOutput();

	priority_queue<int> pq; // max heap
	priority_queue<int, vector<int>, greater<int>> pq; // max heap

	pq.push(10);
	pq.push(15);
	pq.push(5);

	cout << pq.size() << " ";
	cout << pq.top() << " ";

	while (pq.empty() == false)
	{
		cout << pq.top() << " ";
		pq.pop();
	}


	// create a priority queue with existing array
	int arr[] = { 10, 5, 15 };
	priority_queue<int> pq1(arr, arr + 3); // this one is better
	while (pq1.empty() == false)
	{
		cout << pq.top() << " ";
		pq.top();
	}

	// push and pop are O(logn)
	// empty size top are O(1)
	// Applications of priority queue
	/*
		Dijkstra Algorithm
		Prim Algorithm
		Huffman Algorithm
		Heap Sort
		And any other place where heap is used
	*/


	return 0;
}



