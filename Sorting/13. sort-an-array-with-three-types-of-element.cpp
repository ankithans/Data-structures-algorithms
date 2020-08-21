#include <bits/stdc++.h>
using namespace std;


void inputOutput() {
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
}


// 0, 1, 2 prob
// 4 traversals
void sort(int arr[], int n)
{
	int temp[n], i;
	for (int i = 0; i < n; i++)
		if (arr[i] == 0)
			temp[i] = arr[i];
	for (int j = 0; j < n; j++)
		if (arr[j] == 1)
		{
			temp[i] = arr[j];
			i++;
		}
	for (int k = 0; k < n; k++)
		if (arr[k] == 2)
		{
			temp[i] = arr[k];
			i++;
		}
	for (int i = 0; i < n; i++)
		arr[i] = temp[i];
}


// Dutch national flag algo
// three way partitioning
// O(n)
void sort(int arr[], int n)
{
	int lo = 0, hi = n - 1, mid = 0;
	while (mid <= hi)
	{
		switch (arr[mid])
		{
		case 0:
			swap(arr[lo], arr[mid]);
			lo++; mid--;
			break;

		case 1:
			mid++;
			break;

		case 2:
			swap(arr[mid], arr[hi]);
			hi--;
			break;
		}
	}
}



int main() {
	inputOutput();


	return 0;

}

/*
	Sort an array with three types of element
		1. sort an array of 0s, 1s, 2s
		2. three way partitioning when multiple occurence of
			a pivot may exists
		3. Partitioning around a range.
*/


