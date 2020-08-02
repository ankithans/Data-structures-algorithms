#include <bits/stdc++.h>
using namespace std;


void inputOutput() {
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
}

// Naive Solution
// n + (n - 1) + .... + 1
// Time - O(n^2)
bool isSum(int arr[], int n) {
	for (int i = 0; i < n; i ++) {
		int curr_sum = 0;
		for (int j = i; j < n; j ++) {
			curr_sum += arr[j];
			if (curr_sum == 0)
				return true;
		}
	}
	return false;
}

// O(n)
bool isSum_Hashing(int arr[], int n) {
	unordered_set<int> s;
	int pre_sum = 0;
	for (int i = 0; i < n; i ++) {
		pre_sum = pre_sum + arr[i];
		if (s.find(pre_sum) != s.end())
			return true;
		if (pre_sum == 0)
			return true;
		s.insert(pre_sum);
	}
	return false;
}



int main() {
	inputOutput();

	int arr[] = { 1, 4, 13, -3, -10,  5 };
	cout << isSum_Hashing(arr, 6);

	return 0;

}

/*
	We are given an array where we have both +ve & -ve integers, we need to
	find if there is a subarray(means contigous elements) of this of 0 sum.

	I/p: a[] = { 1, 4, 13, -3, -10,  5}
	O/p: Yes

	I/p: a[] = { 1, 4, -3, 1, 2 }
	O/p: Yes

	I/p: a[] = { 3, -1, -2, 5, 6 }
	O/p: Yes

	I/p: a[] = { 5, 6, 0, 8 }
	O/p: Yes

	pre_sum = { 1, 5, 18, 15, 5, 10 } for 1st example
						18 to 5

	arr[] = { 3, -1, -2, 5 }
	          3,  2,  0, 5   ---> case to be handeled
*/


