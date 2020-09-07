#include <bits/stdc++.h>
using namespace std;


void inputOutput() {
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
}

class MinHeap {
	int []arr;
	int size;
	int capacity;
	MinHeap(int c)
	{
		arr =  new int[c];
		size = 0;
		capacity = c;
	}
	int left(int i) { return (2 * i + 1); }
	int right(int i) { return (2 * i + 2); }
	int parent(int i) { return (i - 1) / 2; }
}


/*
	Binary Heap(Heapify and Extract min)

	Min Heapify : Given a Binary Heap with one possible violation,
					fix the heap.

	I/p: 	40						O/p:	 20
		  /	   \						   /    \
		 20    30   					  25    30
	    /  \   /  \						 /  \   /  \
	   35  25 80  32   					35  40 80  32
	 /  \  /						   / \  /
	100 70 60   	  				100 70 60

	violation is at root itself
*/
// time complexity : O(h) - O(logn)
// space : O(h) space
int arr[];
int size, capacity;
void minHeapify(int i)
{
	int lt = left(i), rt = right(i);
	int smallest = i;
	if (lt < size && arr[lt] < arr[i])
		smallest = lt;
	if (rt < size && arr[rt] < arr[smallest])
		smallest = rt;
	if (smallest != i)
	{
		swap(arr[i], arr[smallest]);
		minHeapify(smallest);
	}

}

/*
	getMin is a constant operation which gives u root of tree
	 ==> Extract Min : remove that
*/
// time complexity : O(logn)
int extractMin()
{
	if (size == 0)
		return INT_MAX;
	if (size == 1)
	{
		size --;
		return arr[0];
	}
	swap(arr[0], arr[size - 1]);
	size --;
	minHeapify(0);
	return arr[size];
}



int main() {
	inputOutput();


	return 0;
}



