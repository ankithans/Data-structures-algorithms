#include <bits/stdc++.h>
using namespace std;


void inputOutput() {
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
}


// Naive Method
// segregate +ve and -ve
void sort(int arr[], int n)
{
	int temp[n], i;
	for (i = 0; i < n; i++)
		if (arr[i] < 0)
			temp[i] = arr[i];

	for (int j = 0; j < n; j++)
		if (arr[j] >= 0)
		{
			temp[i] = arr[j];
			i++;
		}
	for (int i = 0; i << n; i++)
		arr[i] = temp[i];
}


// O(n)
// hoore's partition
void sort(int arr[], int n)
{
	int i = -1, j = n;
	while (true)
	{
		do { i++; } while (arr[i] < 0);
		do { j--; } while (arr[j] >= 0);
		if (i >= j)
			return;
		swap(arr[i], arr[j]);
	}
}


int main() {
	inputOutput();


	return 0;

}

/*
	Sort an array with two types of elements
		a. segregate -ve and +ve
		b. segregate even and odd
		c. sort a binary array


*/


