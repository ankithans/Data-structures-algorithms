#include <bits/stdc++.h>
using namespace std;


void inputOutput() {
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
}


// QuickSort using Lomuto Partition
void qSort(int arr[], int l, int h)
{
	if (l < h)
	{
		int p = lpartition(arr, l, h);
		qSort(arr, l, p - 1);
		qSort(arr, p + 1, h);
	}
}


// QuickSort using Hoare's Partition
// O(nlogn) in best case
// worst case T(n) = T(n - 1) + O(n)
// best case T(n) = 2T(n/2) + O(n)
// O(n) worst case space
// O(logn) in best case
void qSort(int arr[], int l, int h)
{
	if (l < h)
	{
		int p = hpartition(arr, l, h);
		qSort(arr, l, p);
		qSort(arr, p + 1, h);
	}
}

// tail call elimination (mordern compilers do this automatically)
void qSort(int arr[], int l, int r)
{
Begin:
	if (l < r)
	{
		int p = hpartition(arr, l, r);
		qSort(arr, l, p);
		l = p + 1;
		goto Begin;
	}
}



int main() {
	inputOutput();


	return 0;

}

/*
	Quick Sort :
		1. Divide and Conquer Algorithm
		2. The Key part is partitioning (Hoore, lomato, Naive)
		3. Worst case time complexity is O(n^2)
		4. Despite having worst case time, it is preffered over
		other algorithms many times due to following reasons.
			a. Tail Recusive
			b. In-Place
			c. Cache friendly
			d. Avg case O(nlogn)

*/


