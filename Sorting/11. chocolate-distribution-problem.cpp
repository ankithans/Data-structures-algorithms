#include <bits/stdc++.h>
using namespace std;


void inputOutput() {
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
}


/*
	sort the array
	traverse the array from left to right
*/
// Time : O(nlogn)
int minDiff(int arr[], int n, int m)
{
	if (m > n)
		return -1;
	int res = arr[m - 1] - arr[0];
	for (int i = 1; (i + m - 1) < n; i++)
		res = min(res, (arr[i + m - 1] - arr[i]));
	return res;
}



int main() {
	inputOutput();


	return 0;

}

/*
	Chocolate Distribution Problem
	 1. every child should get exactly on packet
	 2. we want to minimize the difference b/w min chocolates
	 	that a child gets and the max chocolates that other
	 	child gets.

	I/p: { 7, 3, 2, 4, 9, 12 }
		m = 3
	O/p: 2

	I/p: { 3, 4, 1, 9, 56, 7, 9, 12 }
		m = 5
	O/p: 6

*/


