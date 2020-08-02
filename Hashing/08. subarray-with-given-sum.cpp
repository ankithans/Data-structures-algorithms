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
bool isSum(int arr[], int n, int sum) {
	for (int i = 0; i < n; i ++) {
		int curr_sum = 0;
		for (int j = i; j < n; j ++) {
			curr_sum += arr[j];
			if (curr_sum == sum)
				return true;
		}
	}
	return false;
}

// O(n)
bool isSum_Hashing(int arr[], int n, int sum) {
	unordered_set<int> s;
	int pre_sum = 0;
	for (int i = 0; i < n; i ++) {
		pre_sum += arr[i];
		if (pre_sum == sum)
			return true;
		if (s.find(pre_sum - sum) 	!= s.end())
			return true;
		s.insert(pre_sum);
	}
	return false;
}


int main() {
	inputOutput();

	int arr[] = { 15, 2, 8, 10, -5, -8, 6 };
	cout << isSum_Hashing(arr, 7, 3);

	return 0;

}

/*
	We are given an array where we have both +ve & -ve integers, we need to
	find if there is a subarray(means contigous elements) of this of given sum.

	I/p: a[] = { 5, 8, 6, 13 ,3, -1 }, sum = 22
	O/p: Yes

	I/p: a[] = { 15, 2, 8, 10, -5, -8, 6 }, sum = 3
	O/p: Yes

	I/p: a[] = { 3, 2, 5, 6 }, sum = 10
	O/p: Yes

*/


