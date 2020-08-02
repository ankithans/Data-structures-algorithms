#include <bits/stdc++.h>
using namespace std;


void inputOutput() {
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
}

// Naive Solution
// Time - O((m + n) * (m + n))
// Aux Space O(m + n)
int findUnion(int a[], int b[], int m, int n) {
	int c[m + n];
	for (int i = 0; i < m; i ++)
		c[i] = a[i];
	for (int i = 0; i < n; i ++)
		c[m + i] = b[i];

	int res = 0;
	for (int i = 0; i < m + n; i ++) {
		bool flag = false;
		for (int j = 0; j < i; j ++)
			if (c[i] == c[j]) {
				flag == true;
				break;
			}
		if (flag == false) res ++;
	}
	return res;
}

// Time - O(m + n)
// Aux Space - O(m + n)
int findUnion_hashing(int a[], int b[], int m, int n) {
	unordered_set<int> s;
	for (int i = 0; i < m; i ++)
		s.insert(a[i]);
	for (int i = 0; i < n; i ++)
		s.insert(b[i]);
	return s.size();
}


int main() {
	inputOutput();

	int a[] = { 15, 20, 5, 15 };
	int b[] = { 15, 15, 15, 20, 10 };
	cout << findUnion(a, b, 4, 5);

	return 0;

}

/*
	We are given two unsorted arrays, we need to find count of elements
	in the union of these two arrays. ignore the duplicates.

	I/p: a[] = { 15, 20, 5, 15 }
		 b[] = { 15, 15, 15, 20, 10 }
	O/p: 4

	I/p: a[] = { 10, 12, 15 }
		 b[] = { 18, 12 }
	O/p: 4

	I/p: a[] = { 3, 3, 3 }
		 b[] = { 3, 3, 3 }
	O/p: 1

*/


