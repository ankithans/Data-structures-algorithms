#include <bits/stdc++.h>
using namespace std;


void inputOutput() {
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
}


// Naive sol
// time O(n^2)
void printMark(int arr[], int n, int k)
{
	for (int i = 0; i < n - k + 1; i ++)
	{
		int mx = arr[i];
		for (int j = 1 + 1; j < i + k; j ++)
			mx = max(arr[j], mx);
		cout << mx << " ";
	}

}

// Efficient
// Time O(n)
void printKMax(int arr[], int n, int k)
{
	deque<int> dq;
	for (int i = 0; i < k; i ++)
	{
		while (!dq.empty() && arr[i] >= arr[dq.back()])
			dq.pop_back();
		dq.push_back(i);
	}
	for (int i = k; i < n; i ++)
	{
		cout << arr[dq.front()] << " ";
		while (!dq.empty() && dq.front() <= i - k)
			dq.pop_front();
		while (!dq.empty() && arr[i] >= arr[dq.back()])
			dq.pop_back();
		dq.push_back();
	}
	cout << arr[dq.front()] << " ";
}



int main() {
	inputOutput();


	return 0;
}



/*
	Maximum in all subarray of size k

	n - k + 1 subarrays

	I/p: arr[] = { 10, 8, 5, 12, 15, 7, 6 }
		k = 3
	O/p: 10 12 15 15 15

	I/p: arr[] = { 20, 5, 3, 8, 6, 15 }
		k = 4
	O/p: 20 8 15

*/