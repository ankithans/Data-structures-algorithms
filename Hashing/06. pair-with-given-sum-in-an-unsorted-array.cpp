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
bool isPair(int arr[], int n, int sum) {
	for (int i = 0; i < n; i ++)
		for (int j = i + 1; j < n; j ++) {
			if (arr[i] + arr[j] == sum)
				return true;
		}
	return false;
}

// Time - O(n)
bool isPair_Hashing(int arr[], int n, int sum) {
	unordered_set<int> s;
	for (int i = 0; i < n; i ++) {
		if (s.find(sum - arr[i]) != s.end())
			return true;
		s.insert(arr[i]);
	}
	return false;
}


int main() {
	inputOutput();

	int arr[] = { 2, 4, 6, 3 };
	cout << isPair_Hashing(arr, 4, 11);

	return 0;

}

/*
	We are given an unsorted array and a sum, we need to find if
	there is pair with given sum in the given array.

	I/p: a[] = { 3, 2, 8, 15, -8 }, sum = 17
	O/p: Yes

	I/p: a[] = { 2, 4, 6, 3 }, sum = 11
	O/p: No

	I/p: a[] = { 5, 8, -3, 6 }, sum = 3
	O/p: Yes

*/


