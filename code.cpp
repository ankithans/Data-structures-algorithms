#include <bits/stdc++.h>
using namespace std;


void inputOutput() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}


int longest(int arr[], int n) {
	int res = 0;
	for (int i = 0; i < n; i++)
	{
		int c = 0;
		if (arr[i] == arr[i + 1]) {
			c++;
			res = max(res, c);
		} else
			c = 0;
	}
	return res;
}

int main() {
	inputOutput();

	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];

	cout << longest(a, n);

}