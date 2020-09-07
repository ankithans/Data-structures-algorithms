#include <bits/stdc++.h>
using namespace std;


void inputOutput() {
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
}

/*
	Sort a k-sorted array :
		An element at index i will be present between the indexes
		i - k to i + k in the sorted array
		ur arr is somewhat sorted


	I/p: arr[] = { 9, 8, 7, 18, 19, 17 }
				k = 2
	O/p: arr[] = { 7, 8, 9, 17, 18, 19 }


	I/p: arr[] = { 10, 9, 7, 8, 4, 70, 50, 60 }
				k = 4
	O/p: arr[] = { 4, 7, 8, 9, 10, 50, 60, 70 }

	Naive : simply sort in O(nlogn)

*/
// time complexity - n + klogk
void sortk(int arr[], int n, int k)
{
	priority_queue<int, vector<int> greater<int>> pq;
	for (int i = 0; i <= k; i++)
		pq.push(arr[i]);
	int index = 0;
	for (int i = k + 1; i < n; i++)
	{
		arr[index] = pq.top();
		pq.pop();
		pq.push(arr[i]);
	}
	while (pq.empty() == false)
	{
		arr[index++] = pq.top();
		pq.pop();
	}
}



// klogk + nlogk - klogk + klogk


int main() {
	inputOutput();


	return 0;
}



