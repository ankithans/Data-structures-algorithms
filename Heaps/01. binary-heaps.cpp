#include <bits/stdc++.h>
using namespace std;


void inputOutput() {
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
}


/*
	Binary Heap
		1. used in heapSort
		2. used to implement Priority Queue
		3. Two types
			1. Min Heaps (Highest priority item is
							assigned lowest value)
			2. Max Heaps (Highest priority item is
							assigned highest value)

	Binary Heap is a complete Binary Tree (stored as an array)

			 10	 0			left(i) = 2i + 1
		   /    \ 			right(i) = 2i + 2
		1 20    30	2		parent(i) = floor((i - 1)/2)
 		 /  \   /
	3	40  50 60  5
			4

		10 20 30 40 50 60
		A complete Binary tree and its array representation

		Examples :
			left(1) = 3
			right(1) = 4
			parent(5) = 2

		1. random access
		2. cache friendly
		3. complete binary tree


==>	Min Heap :
		1. Complete Binary Tree
		2. Every node has value smaller than its decendants

			 10  0						2
		   /    \					  /   \
		1 20    15 2				 4     8
		 /  \   /					/ \   / \
	3	30  40 18   5			   6  5   9 10
			4    				  / \
								100 200
	10 20 15 30 40 18
								2 4 8 6 5 9 10 100 200

*/
// Heap Implementation
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
	**Binary Heap Insert**

		  10  0					Insert 12
	   /     \
	1 20     15  2
	 /  \   /  \
    40  50 100  25
   /
  45

	10 20 15 40 50 100 25 45
	0  1  2  3  4  5   6   7   8   9

	capacity = 10
	size = 8
*/
// time : O(logn) // n is the size
void insert(int x)
{
	if (size == capacity) return ;
	size++; arr[size - 1] = x;
	for (int i = size - 1; i != 0 && arr[parent(i)] > arr[i])
	{
		swap(arr[i], arr[parent(i)]);
		i = parent(i);
	}
}



int main() {
	inputOutput();


	return 0;
}



