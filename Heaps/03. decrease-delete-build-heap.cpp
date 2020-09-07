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
	Binary Heap(Decrease key, Delete and Build Heap)

	==> Decrease key :
		I/p: 	 10
			   /    \
			  20    40
			 / \    /
			80 100 70		i = 3
							x = 5

		O/p:  	 5
			   /   \
			  10   40
			 /  \  /
			20 100 70
*/
// time : O(logn)
int arr[];
int size, capacity;
void decreaseKey(int i, int k)
{
	arr[i] = x;
	while (i != 0 && arr[parent(i)] > arr[i])
	{
		swap(arr[i], arr[parent(i)]);
		i = parent(i);
	}
}


// Delete time : O(logn)
/*
	1. decreaseKey(3, -inf) -> -inf will be at top of heap
	2. Extract min -> will del the min ele ie -inf
*/


// Build Heap : Given a random array, rearrange its elements to form a min heap
/*
	I/p: arr[] = { 10, 5, 20, 2, 4, 8 }
	O/p: arr[] = { 2, 4, 8, 5, 10, 20 }
*/
// time complexity mathemetically comes O(n) - feels to be O(nlogn)
int arr[];
int size, capacity;
void buildHeap()
{
	for (int i = (size - 2) / 2; i >= 0; i --)
		minHeapify(x);
}




int main() {
	inputOutput();


	return 0;
}



