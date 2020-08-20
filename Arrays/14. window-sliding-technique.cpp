#include <bits/stdc++.h>
using namespace std;


void inputOutput() {
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
}


// Naive solution
// O(n - k)*k
int max_sum = INT_MIN;
for (int i = 0; i + k - 1 < n; i ++)
{
	int sum = 0;
	for (int j = 0; j < k; j ++)
		sum += arr[i + j];
	max_sum = max(sum, max_sum);
}
return max_sum;


// O(n)
int curr_sum = 0;
for (int i = 0; i < k; i ++)
	curr_sum += arr[i];
int max_sum = curr_sum;
for (int i = k; i < n; i ++)
{
	curr_sum += (arr[i] - arr[i - k]);
	max_sum = max(max_sum, curr_sum);
}
return max_sum;


/*
	Given an unsorted array of non-negative integers. Find if there is
	a subarray with given sum.

	I/p: arr[] = { 1, 4, 20, 3, 10, 5 }
		sum = 33
	O/p: Yes

	I/p: arr[] = { 1, 4, 0, 0, 3, 10, 5 }
		sum = 7
	O/p: Yes

	I/p: arr[] = { 2, 4 }
		sum = 3
	O/p: No
*/
// Naive sol
// O(n^2 )
for (int i = 0; i < n; i ++)
{
	int sum = 0;
	for (int j = i; j < n; j ++) {
		sum += arr[j];
		if (sum == given_sum)
			return true;
	}
}
return false;


// O(n)
bool isSubSum(int arr[], int n, int sum)
{
	int curr_sum = arr[0], s = 0;
	for (int e = 1; e < n; e ++)
	{
		// clean the previous window
		while (curr_sum > sum && s < e - 1)
		{curr_sum -= arr[s]; s ++;}
		if (curr_sum == sum)
			return true;
		if (e < n)
			curr_sum += arr[e];
	}
	return curr_sum == sum;
}


// N-bonacci Numbers: Print first m N-bonacci Numbers
/*
	I/p: N = 3, m = 8
	O/p: 0 0 1 1 2 4 7 13

	I/p: N = 4, m = 10
	O/p: 0 0 0 1 1 2 4 8 15 29
*/



// Count distinct elements m every window of size k
/*
	I/p: arr[] = { 1, 2, 1, 3, 4, 3, 3 }
		k = 4
	O/p: 3 4 3 2
*/



int main() {
	inputOutput();

	cout << "abc";

	return 0;

}

/*
	Window Sliding Technique
	Given and array of integer and a number k, find the maximum sum
	of k consecutive elements.

	I/p: arr[] = { 1, 8, 30, -5, 20, 7 }
		k = 3
	O/p: 45

	I/p: arr[] = { 5, -10, 6, 90, 3 }
		k = 2
	O/p: 96
*/


