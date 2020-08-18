#include <bits/stdc++.h>
using namespace std;


void inputOutput() {
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
}


// Naive sol
// Time O(n^2)
int maxCircularSum(int arr[], int n)
{
	int res = arr[0];
	for (int i = 0; i < n; i ++)
	{
		int curr_max = arr[i];
		int curr_sum = arr[i];
		for (int j = 1; j < n; j ++)
		{
			int index = (i + j) % n;
			curr_sum += arr[index];
			curr_max = max(curr_max, curr_sum);
		}
	}
	return res;
}


// Efficient Solution
// Time O(n)
/*
	Idea : Take the max of following two
		1. Max sum of a normal subarray (Easy : kadane)
		2. Max sum of a circular subarray (Maximum sum of a circular subarray)
*/
int normalMaxSum(int arr[], int n)
{
	int res = arr[0], maxEnding = arr[0];
	for (int i = 0; i < n; i ++)
	{
		maxEnding = max(arr[i], maxEnding + arr[i]);
		res = max(res, maxEnding);
	}
	return res;
}
int overallMaxSum(int arr[], int n)
{
	int max_normal = normalMaxSum(arr, n);
	if (max_normal < 0)
		return max_normal;
	int arr_sum = 0;
	for (int i = 0; i < n; i ++)
	{
		arr_sum += arr[i];
		arr[i] = - arr[i];
	}
	int max_circular = arr_sum + normalMaxSum(arr, n);
	return max(max_normal, max_circular);
}



int main() {
	inputOutput();

	cout << "abc";

	return 0;

}

/*
	Max Circular Sub array

	I/p: arr[] = { 10, 5, -5 }
	Normal : {10}, {5}, {-5}, {10, 5}, {5, -5}, {10, 5, -5}
	Circular: {5, -5, 10}, {-5, 10}, {-5, 10, 5}
	O/p: 15

	I/p: arr[] = { 5, -2, 3, 4 }
	O/p: 12

	I/p: arr[] = { 2, 3, -4 }
	O/p: 5

	I/p: arr[] = { 8, -4, 3, -5, 4 }
	O/p: 12

	I/p: arr[] = { -3, 4, 6, -2 }
	O/p: 10

	I/p: arr[] = { -8, 7, 6 }
	O/p: 13

	I/p: arr[] = { 3, -4, 5, 6, -8, 7 }
	O/p: 17

*/


