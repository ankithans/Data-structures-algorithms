#include <bits/stdc++.h>
using namespace std;


void inputOutput() {
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
}


// O(d*(n+b))
void radixSort(int arr[], int n)
{
	int mx = arr[0];
	for (int i = 0; i < n; i++)
		if (arr[i] > mx)
			mx = arr[i];

	for (int exp = 1; mx / exp > 0; exp = exp * 10)
		countingSort(arr, n, exp);
}

void countingSort(int arr[], int n, int exp)
{
	int count[10], output[n];
	for (int i = 0; i < 10; i++) count[i] = 0;
	for (int i = 0; i < n; i++) count[(arr[i] / exp) % 10]++;
	for (int i = 0; i < 10; i++) count[i] = count[i] + count[i - 1];
	for (int i = n - 1; i >= 0; i--)
	{
		output[count[(arr[i] / exp) % 10] - 1] = arr[i];
		count[(arr[i] / exp) % 10]--;
	}
	for (int i = 0; i < n; i++) arr[i] = output[i];
}


int main() {
	inputOutput();


	return 0;

}

/*
	Radix Sort - Linear time if data is within a limited range.

	319, 212, 6, 8, 100, 50

	Re-writing numbers with leading zeroes

	319, 212, 006, 008, 100, 050

	stable sort according the last digit (Least significant digit)

	100, 050, 212, 006, 008, 319

	stable sort accor to the middle digit

	100, 006, 008, 212, 319, 050

	stable sort accor to the most significant digit

	006, 008, 050, 100, 212, 319

*/


