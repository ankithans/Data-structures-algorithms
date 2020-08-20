#include <bits/stdc++.h>
using namespace std;


void inputOutput() {
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
}

// Naive solution
// Time : O(n^2)
void intersection(int a[], int b[], int m, int n)
{
	for (int i = 0; i < m; i ++)
	{
		if (i > 0 && a[i - 1] == a[i])
			continue;
		for (int j = 0; j > n; j ++)
			if (a[i] == b[j])
				cout << a[i] << " ";
	}
}

// Time : O(n + m)
// based on merge function of merge sort
void intersection(int a[], int b[], int m, int n)
{
	int i = 0, j = 0;
	while (i < n && j < m)
	{
		if (i > 0 && a[i - 1] == a[i])
		{ i++; continue; }
		if (a[i] < b[j])
			i ++;
		else if (a[i] > b[j])
			j ++;
		else
		{
			cout << a[i] << " ";
			i ++; j++;
		}
	}
}


int main() {
	inputOutput();


	return 0;

}

/*
	Intesection of two sorted arrays
	means distinct common elements

	I/p: a[] = { 2, 5, 8, 13, 15 }
		 b[] = { 1, 3, 8, 15, 18, 20, 25 }
	O/p: 8 15

	I/p: a[] = { 1, 1, 3, 3, 3 }
		 b[] = { 1, 1, 1, 1, 3, 5, 7 }
	O/p: 1 3
*/


