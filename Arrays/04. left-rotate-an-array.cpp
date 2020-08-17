#include <bits/stdc++.h>
using namespace std;


void inputOutput() {
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
}


// left Rotate an array by one
// Time - O(n)
// space O(1)
void lRotateOne(int arr[], int n)
{
	int temp = arr[0];
	for (int i = 0; i < n; i ++)
	{
		arr[i - 1] = arr[i];
	}
	arr[n - 1] = temp;
}


// left rotate an array by D places
// Time - O(nd)
// space O(1)
void lRotateD(int arr[], int n, int d)
{
	for (int i = 0; i < d; i ++)
	{
		lRotateOne(arr, n);
	}
}



/*

I/p: arr[] = { 1, 2, 3, 4, 5 }
			d = 2
O/p: arr[] = { 3, 4, 5, 1, 2 }


I/p: arr[] = { 10, 5, 30, 50 }
			d = 3
O/p: arr[] = { 50, 10, 5, 30 }

We may assume d <= No. of elements
					in an array

*/
// Method 2 : Better
// Time : O(d + n-d + d) = O(n)
// space : O(d)
void leftRotateD(int arr[], int n, int d)
{
	int temp[d];

	for (int i = 0; i < d; i ++)
		temp[i] = arr[i];

	for (int i = d; i < n; i ++)
		arr[i - d] = arr[i];

	for (int i = 0; i < d; i ++)
		arr[n - d + i] = temp[i];
}

// Method : 3 (Reversal Algorithm)
void leftRotateD_second(int arr[], int n, int d)
{
	reverse(arr, 0, d - 1);
	reverse(arr, d, n - 1);
	reverse(arr, 0, n - 1);
}

void reverse(int arr[], int low, int high)
{
	while (low < high)
	{
		swap(arr[low], arr[high]);
		low ++;
		high --;
	}
}


int main() {
	inputOutput();

	cout << "abc";

	return 0;

}

/*
	Left Rotate an array

*/


