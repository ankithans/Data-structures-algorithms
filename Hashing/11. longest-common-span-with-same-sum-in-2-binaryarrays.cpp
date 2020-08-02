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
// Aux Space - O(1)
int maxCommon(int arr1[], int arr2[], int n) {
	int res = 0;
	for (int i = 0; i < n; i ++) {
		int sum1 = 0, sum2 = 0;
		for (int j = i; j < n; j ++) {
			sum1 += arr1[j];
			sum2 += arr2[j];
			if (sum1 == sum2)
				res = max(res, j - i + 1);
		}
	}
	return res;
}

// Time - O(n)
// Hint - This problem is going to reduce into the problem of finding
//        the longest subarray with 0 sum.

int maxCommon_Hashing(int arr1[], int arr2[], int n) {
	int temp[n];
	for (int i = 0; i < n; i ++) {
		temp[i] = arr1[i] - arr2[i];
	}
	unordered_map<int, int> m;
	int pre_sum = 0, res = 0;
	for (int i = 0; i < n; i ++) {
		pre_sum += temp[i];
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

	int arr1[] = { 0, 1, 0, 0, 0, 0 };
	int arr2[] = { 1, 0, 1, 0, 0, 1 };
	cout << maxCommon_Hashing(arr1, arr2, 6);

	return 0;

}

/*
	We are given two binary arrays, means every element is 0 or 1. we need to find
	out longest common subarray such sum of elements in this common subarray is same in
	both the array

	I/p: arr1[] = { 0, 1, 0, 0, 0, 0 }
		 arr2[] = { 1, 0, 1, 0, 0, 1 }
	O/p: 4

	I/p: arr1[] = { 0, 1, 0, 1, 1, 1, 1 }
		 arr2[] = { 1, 1, 1, 1, 1, 0, 1 }
	O/p: 6

	I/p: arr1[] = { 0, 0, 0 }
		 arr2[] = { 1, 1, 1 }
	O/p: 0

	I/p: arr1[] = { 0, 0, 1, 0 }
		 arr2[] = { 1, 1, 1, 1 }
	O/p: 1

*/


