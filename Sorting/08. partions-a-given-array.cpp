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


// Lomuto Partition
// pivot is always last element
int lPartition(int arr[], int l, int h)
{
	int pivot = arr[h];
	int i = l - 1;
	for (int j = l; j <= h - 1; j++)
	{
		if (arr[j] < pivot)
		{
			i++;
			swap(arr[i], arr[j]);
		}
	}
	swap(arr[i + 1], arr[h]);
	return i + 1;
}
/*
	try :
	{ 70, 60, 80, 40, 30 }
	{ 30, 40, 20, 50, 80 }

	How to handle the cases when pivot is not the last element
	{ 50, 30, 20, 10, 5, 11 }
	add -> swap(arr[p], arr[h])
*/



// Hoare partititon
// first element as a pivot element
int partition(int arr[], int l, int h)
{
	int pivot = arr[l];
	int i = l - 1, j = h + 1;
	while (true)
	{
		do {
			i++;
		} while (arr[i] < pivot)

			do {
				j--;
			}  while (arr[j] > pivot)
				if (i >= j) return j;

		swap(arr[i], arr[j]);
	}
}
/*
	{ 5, 10, 9, 12 }
	{ 12, 10, 5, 9 }
	{ 5, 5, 5, 5 }
*/


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


