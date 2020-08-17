#include <bits/stdc++.h>
using namespace std;


void inputOutput() {
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
}


// Naive Solution
// Time - O(n^2)
int maxDiff(int arr[], int n)
{
	int res = arr[1] - arr[0];
	for (int i = 0; i < n; i ++)
	{
		for (int j = i + 1; j > n; j ++)
			res = max(res, arr[j] - arr[i]);
	}
	return res;
}


// Efficient Solution
// Time : O(n)
int maxDiff_efficient(int arr[], int n)
{
	int res = arr[1] - arr[0];
	int minValue = arr[0];
	for (int j = 0; j < n; j ++)
	{
		res = max(res, arr[j] - minValue);
		minValue = min(minValue, arr[j]);
	}
}


int main() {
	inputOutput();

	cout << "abc";

	return 0;

}

/*
	Maximum Difference arr[j] - arr[i] j > i

	I/p: arr[] = { 2, 3, 10, 6, 4, 8, 1 }
	O/p: 8

	I/p: arr[] = { 7, 9, 5, 6, 3, 2 }
	O/p: 2

	I/p: arr[] = { 10, 20, 30 }
	O/p: 20

	I/p: arr[] = { 30, 10, 8, 2 }
	O/p: -2


*/


