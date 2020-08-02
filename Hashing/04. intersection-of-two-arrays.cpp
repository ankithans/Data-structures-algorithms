#include <bits/stdc++.h>
using namespace std;


void inputOutput() {
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
}

// Naive solution
// Time - O(m * (m + n))
int intersection(int a[], int b[], int m, int n) {
	int res = 0;
	for (int i = 0; i < m; i ++) {
		bool flag = false;
		for (int j = 0; j < i; j ++)
			if (a[j] == a[i]) {
				flag = true;
				break;
			}
		if (flag == true) continue;

		for (int j = 0; j < n; j ++)
			if (a[i] == b[j]) {
				res ++;
				break;
			}
	}
	return res;
}

// O(m + n) Time
// O(m) Aux Space
int intersection_hashing(int a[], int b[], int m, int n) {
	unordered_set<int> s;
	for (int i = 0; i < m; i ++)
		s.insert(a[i]);

	int res = 0;
	for (int j = 0; j < n; j ++) {
		if (s.find(b[j]) != s.end()) {
			res ++;
			s.erase(b[j]);
		}
	}
	return res;
}




int main() {
	inputOutput();

	int a[] = { 10, 15, 20, 15, 30, 30, 5 };
	int b[] = { 30, 5, 30, 80 };
	cout << intersection(a, b, 7, 4);

	return 0;

}

/*
	We are given two unsorted arrays, we need to find intersection of these two
	unsorted arrays.

	I/p: a[] = { 10, 15, 20, 15, 30, 30, 5 }
		 b[] = { 30, 5, 30, 80 }
	O/p: 2

	I/p: a[] = { 10, 20 }
		 b[] = { 20, 30 }
	O/p: 1

	I/p: a[] = { 10, 10. 10 }
		 b[] = { 10, 10. 10 }
	O/p: 1

*/


