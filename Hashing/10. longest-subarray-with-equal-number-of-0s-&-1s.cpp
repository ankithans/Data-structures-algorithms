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
int longestSub(int arr[], int n) {
	int res = 0;
	for (int i = 0; i < n; i ++) {
		int c0 = 0, c1 = 0;
		for (int j = i; j < n; j ++) {
			if (arr[j] == 0)
				c0++;
			else
				c1++;
			if (c0 == c1)
				res = max(res, j - i + 1);
		}
	}
	return res;
}

// Time - O(n)
// Aux Space - O(n)
// replace 0s with -1
// apply max len subarray with 0 sum
int longestSub_Hash(int arr[], int n) {
	unordered_map<int, int> m;
	for (int i = 0; i < n ; i ++) {
		if (arr[i] == 0)
			arr[i] = -1;
	}
	int pre_sum = 0, res = 0;
	for (int i = 0; i < n; i ++) {
		pre_sum += arr[i];
		if (pre_sum == 0)
			res = i + 1;
		if (m.find(pre_sum) != m.end())
			res = max(res, i - m[pre_sum]);
		m.insert({pre_sum, i});
	}
	return res;
}



int main() {
	inputOutput();

	int arr[] = { 1, 0, 1, 1, 1, 0, 0 };  // { 1, -1, 1, 1, 1, -1, -1 } --> { 1, 0, 1, 2, 3, 2, 1 }
	cout << longestSub_Hash(arr, 7);

	return 0;

}

/*
	We are given a binary array, means every element is 0 or 1. we need to find
	out longest subarray such that no of zeroes and no of ones are same in this
	subarray.

	I/p: a[] = { 1, 0, 1, 1, 1, 0, 0 }
	O/p: 6

	I/p: a[] = { 1, 1, 1, 1 }
	O/p: 0

	I/p: a[] = { 0, 0, 1, 1, 1, 1, 1, 0 }
	O/p: 4

*/


