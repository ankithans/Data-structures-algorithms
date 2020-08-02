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
// Aux Space
int maxLenSubarray(int arr[], int n, int sum) {
	int res = 0;
	for (int i = 0; i < n; i ++) {
		int curr_sum = 0;
		for (int j = i; j < n; j ++) {
			curr_sum += arr[j];
			if (curr_sum == sum)
				res = max(res, j - i + 1);
		}
	}
	return res;
}

// Time -  O(n)
// Aux Space - O(n)
int maxLenSubarray_Hashing(int arr[], int n , int sum) {
	unordered_map<int, int> m;

	int pre_sum = 0, res = 0;
	for (int i = 0; i < n; i ++) {
		pre_sum += arr[i];
		if (pre_sum == sum)
			res = i + 1;
		if (m.find(pre_sum - sum) != m.end())
			res = max(res, i - m[pre_sum - sum]);
		m.insert({pre_sum, i});

	}
	return res;
}


int main() {
	inputOutput();

	int arr[] = { 5, 8, -4, -4, 9, -2, 2 };
	cout << maxLenSubarray_Hashing(arr, 7, 0);

	return 0;

}

/*
	We are given an array where we have both +ve & -ve integers, we need to
	find out longest subarray with given sum.

	I/p: a[] = { 5, 8, -4, -4, 9, -2, 2 }, sum = 0
	O/p: 3

	I/p: a[] = { 3, 1, 0, 1, 8, 2, 3, 6 }, sum = 5
	O/p: 4

	I/p: a[] = { 8, 3, 7 }, sum = 15
	O/p: 0

*/


