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
	==> Heap Sort

		I/p: arr[] = { 10, 15, 50, 4, 20 }
		O/p: arr[] = { 4, 10, 15, 20, 50 }

				step 1: Build a Max Heap

*/
void maxHeapify(int arr[], int n, int i)
{
	int largest = i, left = 2 * i + 1, right = 2 * i + 2;
	if (left < n && arr[left] > arr[largest]) largest = left;
	if (right < n && arr[right] > arr[largest]) largest = right;
	if (largest != i)
	{
		swap(arr[largest], arr[i]);
		maxHeapify(arr, n, largest);
	}
}
void buildHeap(int arr[], int n)
{
	for (int i = (n - 1) / 2; i >= 0; i--)
		maxHeapify(arr, n, i);
}

/*
	step 2 :
		repeatedly swap root with last node, reduce heap size by one, and heapify.
*/
void heapSort(int arr[], int n)
{
	buildHeap(arr, n);
	for (int i = n - 1; i >= 1; i--)
	{
		swap(arr[0], arr[i]);
		maxHeapify(arr, i, 0);
	}
}
// time complexity : O(nlogn)

int main() {
	inputOutput();


	return 0;
}



