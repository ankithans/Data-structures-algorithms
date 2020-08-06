#include <bits/stdc++.h>
using namespace std;


void inputOutput() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}



int main() {
	inputOutput();


	return 0;

}

/*
	int arr[100];
	int arr[n]; // where n is an integer
	int *arr = new int[n]; // on heap
	vector<int> v;

	Problems with arrays:
	1. Either size is fixed and pre-allocated(in both fixed and variable
		sized arrays), OR the worst case insertion at the end is O(n).
	2. Insertion in the middle (or beginning) is costly.
	3. Deletion from the middle (or beginning) is costly.
	4. Inplementation of data structures like que and deque is complex
		with arrays.

	1. How to implement Round Robin Scheduling ?
	2. Given a seq of items whenever we see an item x in the sequence
		, we need o replace it with 5 instances of another item y.
	3. We have multiple sorted sequences and we need merge them frequ.


	Introduction:

		head -> 10 -> 5 -> 20 -> 25 -> Null

		every element stores the reference or pointer to the next element

		The idea is to drop the contiguos memory requirements so that
		insertions, deletions can efficiently happen at the middle also.
		And no need to pre-allocate the space
		(No extra nodes)
*/
