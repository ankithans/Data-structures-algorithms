#include <bits/stdc++.h>
using namespace std;


void inputOutput() {
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
}

// Naive Solution
// Time : (m + n) * log(m + n)
void printUnion(int a[], int b[], int m, int n)
{
	int c[m + n];
	for (int i = 0; i < m; i++)
		c[i] = a[i];
	for (int i = 0; i < n; i++)
		c[m + i] = b[i];
	sort(c, c + m + n);

	for (int i = 0; i < m + n; i ++)
		if (i == 0 || c[i] != c[i - 1])
			cout << c[i] << " ";
}

// O(m + n)
void printUnion(int a[], int b[], int n)
{
	int i = 0, j = 0;
	while (i < m && j < n)
	{
		if (i > 0 && a[i] == a[i - 1]) { i++; continue; }
		if (j > 0 && b[j] == b[j - 1]) { j++; continue; }
		if (a[i] < b[j]) { cout << a[i] << " "; i++; }
		else if (b[j] < a[i]) { cout << b[j] << " "; j++; }
		else { cout << a[i] << " "; i++; j++; }
	}
	while (i < m)
	{
		if (i == 0 || a[i] != a[i - 1])
			cout << a[i];
		i++;
	}
	while (j < n)
	{
		if (j == 0 || b[j] != b[j - 1])
			cout << b[j];
		j++;
	}
}



int main() {
	inputOutput();


	return 0;

}

/*
	Union of two sorted arrays
	// print all the distinct elements in sorted order

	I/p: a[] = { 3, 8, 10 }
		 b[] = { 2, 8, 9, 10, 15 }
	O/p: 2 3 8 9 10 15

	I/p: a[] = { 2, 3, 3, 3, 4 }
		 b[] = { 4, 4 }
	O/p: 2, 3, 4

*/


