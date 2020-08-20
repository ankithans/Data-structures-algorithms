#include <bits/stdc++.h>
using namespace std;


void inputOutput() {
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
}


// Naive Solution - modifies orignal array
// Time O(nlogn)
int kthSmallest(int arr[], int n, int k)
{
	sort(arr, arr + n);
	return arr[k - 1];
}

// optimized solution
int kthSmallest(int arr[], int n, int k)
{
	int l = 0, r = n - 1;
	while (l <= r)
	{
		int p = partition(arr, l, r);
		if (p == k - 1)
			return p;
		else if (p > k - 1)
			r = mid - 1;
		else
			r = mid + 1;
	}
	return -1;
}



int main() {
	inputOutput();


	return 0;

}

/*
	K-th smallest Element - (Distinct elements)

	I/p: { 10, 5, 30, 12 }
		k = 2
	O/p: 10

	I/p: { 30, 20, 5, 10, 8 }
		k = 4
	O/p: 20

*/


