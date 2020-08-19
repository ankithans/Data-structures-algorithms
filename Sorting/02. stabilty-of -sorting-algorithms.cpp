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
	Stability in sorting algorithms

	arr[] = { ("Anil", 50), ("Ayan", 80), ("Piyush", 50), ("Ramesh", 80) }
	the arr is sorted acc to there names
	we want to sort the array according to the increasing order of there marks
	in the sorted arr we need to make sure that if 2 students have same marks
	then they appear alphabatacaly in order. This property is called stability.

	If two items have same value then they should appear in same order as
	they appear in the sorted array.

	Example stable Sorts : Bubble Sort, Insertion sort, Merge Sort
	Example unstable : Selection Sort, Quick Sort, Heap Sort

	Bubble sort compares adjacent elements
	Selection sort finds max ele in array swap max with last

*/


