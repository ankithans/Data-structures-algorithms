#include <bits/stdc++.h>
using namespace std;


void inputOutput() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

int sum(int a[], int n, int s = 0)
{
	if (n < 0)
		return s;
	if (a[n] % 2 == 0)
		s = s + a[n];
	return sum(a, n - 1, s);
}


int main() {
	inputOutput();

	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
	cout << sum(arr, 7, 0);

	return 0;
}



