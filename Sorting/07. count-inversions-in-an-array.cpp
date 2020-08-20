#include <bits/stdc++.h>
using namespace std;


void inputOutput() {
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
}


// Naive solution
int countInversions(int arr[], int n)
{
	int res = 0;
	for (int i = 0; i < n - 1; i ++)
		for (int j = i + 1; j < n; j ++)
			if (arr[i] > arr[j])
				res ++;
	return res;
}


// Efficient solution O(nlogn)
/*
	Every inversion (x, y) where x > y has possibilities
		a. Both x and y are in left half
		b. Both x and y are in right half
		c. x is in left half and y is in right half
*/
int countInv(int arr[], int l, int r)
{
	int res = 0;
	if (l < r)
	{
		int m = l + (r - l) / 2;
		res += countInv(arr, l, m);
		res += countInv(arr, m + 1, r);
		res += countAndMerge(arr, l, m, r);
	}
	return res;
}

// O(nlogn)
// space O(n)
int countAndMerge(int arr[], int l, int n1, int n2)
{
	int n1 = m - l + 1, n2 = r - m;
	int left[n1], right[n2];

	for (int i = 0; i < n1; i ++) left[i] = arr[l + i];
	for (int i = 0; i < n2; i ++) right[i] = arr[m + 1 + i];

	int res = 0, i = 0, j = 0, k = l;
	while (i < n1 && j < n2)
	{
		if (left[i] <= right[j]) { arr[k] = left[i]; i++; }
		else { arr[k] = right[j]; j++; res = res + (n1 - i); }
		k++;
	}
	while (i < n1) { arr[k] = left[i]; i++; k++; }
	while (j < n2) { arr[k] = right[j]; j++; k++; }
	return res;
}



int main() {
	inputOutput();


	return 0;

}

/*
	Count Inversions in an array
	A pair (arr[i], arr[j]) forms a inversion when i < j and
	arr[i] > arr[j]
	means larger ele appears before a smaller in array

	I/p: { 2, 4, 1, 3, 5 }
    O/p: 3

    I/p: { 10, 20, 30, 40 }
    O/p: 0

    I/p: { 40, 30, 20, 10 }
    O/p: 6

*/


