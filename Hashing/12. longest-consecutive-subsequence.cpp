#include <bits/stdc++.h>
using namespace std;


void inputOutput() {
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
}


// Naive Solution
// Time - ((n - k) * k * k)
void printDistinct(int arr[], int n, int k) {
	for (int i = 0; i <= n - k; i ++) {
		int count = 0;
		for (int j = 0; j < k; j ++) {
			bool flag = false;
			for (int p = 0; p < j; p ++) {
				if (arr[i + j] == arr[i + p]) {
					flag = true;
					break;
				}
				if (flag == false)
					count ++;
			}
			cout << count << " ";
		}
	}
}

// Time - O(n)
void printDistinct_Hashing(int arr[], int n, int k) {
	unordered_map<int, int> mp;
	for (int i = 0; i < n; i ++) {

	}
}



int main() {
	inputOutput();

	int arr[] = { 1, 9, 3, 4, 2, 20 };
	cout << findLongest_Hashing(arr,  6);

	return 0;

}

/*
	Count distinct elements in a every window of an given array

	windows will be  n - k + 1
					 7 - 4 + 1 = 4

	I/p: arr[] = { 10, 20, 20, 10, 30, 40, 10 }, k = 4
	O/p: 2, 3, 4, 3

	I/p: arr[] = { 10, 10, 10, 10 }
	O/p:

	I/p: arr[] = { 20, 30, 40 }
	O/p: 1

*/


