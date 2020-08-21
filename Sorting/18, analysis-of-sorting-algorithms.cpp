#include <bits/stdc++.h>
using namespace std;


void inputOutput() {
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
}


int main() {
	inputOutput();


	return 0;

}

/*
	Overview of sorting algorithm

		1. Binary Array (Partition algo of quick sort) => (lomuto, hoare, naive)
		2. Array with three value => (Quicksort partition algo)
		3. Array of size n and range of element is small => (counting sort)
		4. Array of size n and range is of size n^2 or n^3 or closer => (Radix sort)
		5. Array of uniformly distributed data over a range => (Bucket sort)
		6. When memory writes are costly => (selection sort & cycle sort)
		7. When adjacent swaps are allowed => (Bubble sort, cocktail sort)
		8. When array size is small => (Insertion sort)
		9. When available extra memory is less => (Shall sort(O(n(logn)^2))

	General Purpose Sorting Algorithms O(nlogn)
		1. Merge Sort
		2. Heap Sort
		3. Quick Sort O(n^2) in worst but works better on avg

	Hybrid Algorithms (used in libraries)
		1. TimSort (in python)
		2. IntroSort (in c++)

*/


