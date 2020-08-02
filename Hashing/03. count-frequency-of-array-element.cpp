#include <bits/stdc++.h>
using namespace std;


void inputOutput() {
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
}

// Naive Solution
// Time O(n^2)
// Aux Space O(1)
void printFreq(int arr[], int n) {
	for (int i = 0; i < n; i ++) {
		bool flag = false;
		for (int j = i - 1; j >= 0; j --) {
			if (arr[j] == arr[i]) {
				flag = true;
				break;
			}
		}
		if (flag == true) continue;
		int freq = 1;
		for (int j = i + 1; j < n; j ++)
			if (arr[j] == arr[i])
				freq ++;

		cout << arr[i] << " " << freq << endl;
	}
}

// Time O(n)
// Aux Space O(n)
void countFreq(int arr[], int n) {
	unordered_map<int, int> mp;

	for (int i = 0; i < n; i ++)
		mp[arr[i]] ++;

	for (auto x : mp)
		cout << x.first << " " << x.second << endl;

}

int main() {
	inputOutput();

	int arr[] = { 10, 12, 10, 15, 10, 20, 12, 12 };
	countFreq(arr, 8);

	return 0;

}

/*
	We are given a array, the array contain duplicates, we need to count
	frequency of array elements.

	I/p: { 10, 12, 10, 15, 10, 20, 12, 12 }
	O/p: 10	3
		 12	3
		 15 1
		 20 1

	I/p: { 10, 10, 10, 10 }
	O/p: 10 4

*/


