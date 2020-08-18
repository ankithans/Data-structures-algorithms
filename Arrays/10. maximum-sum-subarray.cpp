#include <bits/stdc++.h>
using namespace std;


void inputOutput() {
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
}


// Naive solution
// Time - O(n^2)
int maxSum(int arr[], int n)
{
	int res = arr[0];
	for (int i = 0; i < n; i ++)
	{
		int curr = 0;
		for (int j = i; j < n; j ++)
		{
			curr = curr + arr[i];
			res = max(res, curr);
		}
	}
	return res;
}

// Efficient solution
// Time O(n)
// max sum of a subarray which ends with the element
/*
	-5 1 -2 3 -1 2 -2
	-5 1 -1 3  2 4  2

	maxEnding(i) = max((maxEnding(i - 1) + arr[i]), arr[i])
*/
int maxSum(int arr[], int sum)
{
	int res = arr[0];
	int maxEnding = arr[0];
	for (int i = 0; i < n; i ++)
	{
		maxEnding = max(maxEnding + arr[i], arr[i]);
		res = max(res, maxEnding);
	}
	return res;
}



int main() {
	inputOutput();

	cout << "abc";

	return 0;

}

/*
	Maximum Sum Subarray

	I/p: { 2, 3, -8, 7, -1, 2, 3 }
	O/p: 11

	I/p: { 5, 8, 3 }
	O/p: 16

	I/p: { -6, -1, -8 }
	O/p: -1

*/


