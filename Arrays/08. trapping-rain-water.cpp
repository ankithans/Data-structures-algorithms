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
int getWater(int arr[], int n)
{
	int res = 0;
	for (int i = 0; i < n - 1; i ++)
	{
		int lmax = arr[i];
		for (int j = 0; j < i; j ++)
			lmax = max(lmaxm arr[j]);

		int rmax = arr[i];
		for (int j = i + 1; j < n; j ++)
			rmax = max(lmaxm arr[j]);

		res = res + (min(lmax, rmax) - arr[i]);
	}
}


// Efficient Solution
// Time O(n)
int getWater_second(int arr[], int n)
{
	int res = 0;
	int lmax[n], rmax[n];

	lmax[0] = arr[0];
	for (int i = 0; i < n; i ++)
		lmax[i] = max(arr[i], lmax[i - 1]);

	rmax[n - 1] = arr[n - 1];
	for (int i = n - 2; i >= 0; i --)
		rmax[i] = max(arr[i], rmax[i + 1]);

	for (int i = 1; i < n - 1; i ++)
		res = res + (min(lmax[i], rmax[i]) - arr[i]);

	return res;
}



int main() {
	inputOutput();

	cout << "abc";

	return 0;

}

/*
	Trapping Rain Water


	I/p: arr[] = { 2, 0, 2}
	O/p: 2

	I/p: arr[] = { 3, 0, 1, 2, 5 }
	O/p: 6

	I/p: arr[] = { 1, 2, 3 }
	O/p: 0

	I/p: arr[] = { 1, 2, 3 }
	O/p: 0


*/


