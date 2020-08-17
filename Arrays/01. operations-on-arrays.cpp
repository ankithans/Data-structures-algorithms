#include <bits/stdc++.h>
using namespace std;


void inputOutput() {
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
}

// Search
// Time O(n)
int search(int arr[], int n, int x)
{
	for (int i = 0; i < n; i ++)
		if (arr[i] == x)
			return i;
	return -1;
}

// Insertion
// Time O(n)
int insert(int arr[], int n, int x, int cap, int pos)
{
	if (n == cap)
		return n;
	int idx = pos - 1;
	for (int i = n - 1; i >= idx; i --)
		arr[i + 1] = arr[i];
	arr[idx] = x;
	return (n + 1);
}

// Deletion
int deleteEle(int arr[], int n, int x)
{
	int i;
	for (i = 0; i < n; i ++)
		if (arr[i] == x)
			break;
	if (i == n)
		return n;
	for (int j = i; j < n - 1; j ++)
		arr[j] = arr[j + 1];
	return n - 1;
}

// insert - O(n)
// Search - O(n) for unsorted
// O(logn) for sorted
// Delete - O(n)
// Get ith ele - O(1)
// update ith ele - O(1)
// Insert at the end and delete from the end can be done in O(1) time.


int main() {
	inputOutput();

	cout << "abc";


	return 0;

}

/*
	Operations on array

*/


