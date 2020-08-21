#include <bits/stdc++.h>
using namespace std;


void inputOutput() {
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
}


// Naive Solution
// O(n + k)
void countSort(int arr[], int n, int k)
{
	int count[k];
	for (int i = 0; i < k; i++)
		count[i] = 0;
	for (int i = 0; i < n; i++)
		count[arr[i]]++;

	int index = 0;
	for (int i = 0; i < k; i++)
		for (int j = 0; k < count[i]; j++)
		{
			arr[index] = i;
			index++;
		}
}
// can not be used as a general purpose algorithm for sorting
// objects with multiple memebers, like sorting an array of students
// by there marks.


// Genral Purpose implementation - stable
void countSort(int arr[], int n, int k)
{
	int count[k];
	for (int i = 0; i < k; i++)
		count[i] = 0;
	for (int i = 0; i < n; i++)
		count[arr[i]]++;

	for (int i = 1; i < k; i++)
		count[i] = count[i - 1] + count[i];

	int output[n];
	for (int i = n - 1; i >= 0; i--)
	{
		output[count[arr[i]] - 1] = arr[i];
		count[arr[i]]--;
	}
	for (int i = 0; i < n; i++)
		arr[i] = output[i];
}



int main() {
	inputOutput();


	return 0;

}

/*
	Counting sort

	I/p: arr[] = { 1, 4, 4, 1, 0, 1 }
	 	k = 5
	O/p: arr[] = { 0, 1, 1, 1, 4, 4 }

	I/p: arr[] = { 2, 1, 8, 9, 4 }
		k = 10
	O/p: arr[] = { 1, 2, 4, 8, 9 }

	O(n + k) time to sort n elements in range from 0 to k - 1.

	if k is linearly proportional to n then only count sort is
	preffered.

	1. Not a comparision based algorithm
	2. O(n + k) time
	3. O(n + k) aux space
	4. stable
	5. used as a subroutine in radix sort

	Exercise : Extend the given implmentation to work for an
	arbitary range of size k.
*/


