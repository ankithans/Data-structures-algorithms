#include <bits/stdc++.h>
using namespace std;


void inputOutput() {
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
}


// Naive Solution
// time O(n)
// space O(n)
void partition(int arr[], int l, int h, int p)
{
	int temp[h - l + 1], index = 0;

	for (int i = l; i <= h; i++)
		if (arr[i] <= arr[p])
		{ temp[index] = arr[i]; index++; }
	for (int i = l; i <= h; i++)
		if (arr[i] > arr[p])
		{ temp[index] = arr[i]; index++; }

	for (int i = l; i <= h; i++)
		arr[i] = temp[i - l];
}



int main() {
	inputOutput();


	return 0;

}

/*
	Partition a given array

	I/p: arr[] = { 3, 8, 6, 12, 10, 7 }
			p = 5
	O/p: arr[] = { 3, 6, 7, 8, 12, 10 }
						or
						.
						.
						.


*/


