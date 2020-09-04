#include <bits/stdc++.h>
using namespace std;


void inputOutput() {
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
}


void pairInSortedRotatedArray()
{
	int i;
	for (i = 0; i < n - 1; i++)
		if (arr[i] > arr[i + 1])
			break;
	int l = (i + 1) % n;
	int r = i;

	while (l != r)
	{
		if (arr[l] + arr[r] == x)
			return true;

		if (arr[l] + arr[r] < x)
			l = (l + 1) % n;
		else
			r = (n + r - 1) % n;
	}
	return false;

}


int main() {
	inputOutput();

	cout << "abc";

	return 0;

}

/*
	Input: arr[] = {11, 15, 6, 8, 9, 10}, x = 16
	Output: true
	There is a pair (6, 10) with sum 16

	Input: arr[] = {11, 15, 26, 38, 9, 10}, x = 35
	Output: true
	There is a pair (26, 9) with sum 35

	Input: arr[] = {11, 15, 26, 38, 9, 10}, x = 45
	Output: false
	There is no pair with sum 45.


*/


