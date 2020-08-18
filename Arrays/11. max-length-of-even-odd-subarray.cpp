#include <bits/stdc++.h>
using namespace std;


void inputOutput() {
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
}


// Naive Solution
// O(n^2)
int maxEvenOdd(int arr[], int n)
{
	int res = 1;
	for (int i = 0; i < n; i ++)
	{
		int curr = 1;
		for (int j = i + 1; j < n; j ++)
		{
			if ((curr[j] % 2 == 0 && arr[j - 1] % 2 != 0) ||
			        (curr[j] % 2 != 0 && arr[j - 1] % 2 == 0))
				curr ++;
			else
				break;
		}
		res = max(res, curr);
	}
	return res;
}


// O(n)
int maxEvenOdd(int arr[], int n)
{
	int res = 1;
	int curr = 1;
	for (int i = 0; i < n; i ++)
	{
		if ((arr[i] % 2 == 0 && arr[i - 1] % 2 != 0) ||
		        (arr[i] % 2 != 0 && arr[i - 1] % 2 == 0))
		{
			curr ++;
			res = max(res, curr);
		}
		else curr = 1;
	}
	return res;
}



int main() {
	inputOutput();

	cout << "abc";

	return 0;

}

/*
	Maximum Length Even Odd subarray

	I/p: { 10, 12, 14, 7, 8 }
	O/p: 3

	I/p: {7, 10, 13, 14 }
	O/p: 4

	I/p: { 10, 12, 8, 4 }
	O/p: 1

*/


