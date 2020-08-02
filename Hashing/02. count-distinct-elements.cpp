#include <bits/stdc++.h>
using namespace std;


void inputOutput() {
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
}

// Naive Solution - O(n^2)
int countDist(int arr[], int n) {
	int res = 0;
	for (int i = 0; i < n; i ++) {
		bool flag = false;
		for (int j = 0; j < i; j ++) {
			if (arr[j] == arr[i]) {
				flag = true;
				break;
			}
		}
		if (flag == false)
			res ++;
	}
	return res;
}

// Time - O(n)
// Aux Space - O(n)
int countDistHash(int arr[], int n) {
	unordered_set<int> s;
	for (int i = 0; i < n; i ++) {
		s.insert(arr[i]);
	}
	return s.size();
}



int main() {
	inputOutput();

	int arr[] = { 10, 20, 30 };
	cout << countDist(arr, 3);


	return 0;

}

/*
	We are given a array, the array contain duplicates, we need to count
	how many distinct elements are there in array.

	I/p: { 15, 12, 13, 12, 13, 13, 18 }
	O/p: 4

	I/p: { 10, 10, 10 }
	O/p: 1

	I/p: { 10, 20, 30 }
	O/p: 3

*/


