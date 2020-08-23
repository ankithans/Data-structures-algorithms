#include <bits/stdc++.h>
using namespace std;


void inputOutput() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

void NoOfTrips(int W[], int n, int k, int count = 0)
{
	int sum = 0;
	int i;
	if (n < 0)
		return;
	for (i = n - 1; i >= 0; i--)
	{
		if (sum < k)
			sum += W[i];
		else
			break;
	}
	count++;
	cout << count << endl;
	NoOfTrips(W, i, k, count);
}



int main() {
	inputOutput();


	int t; cin >> t;
	while (t--)
	{
		int n, k;
		cin >> n >> k;
		int W[n];
		for (int i = 0; i < n; i++)
		{
			cin >> W[i];
		}

		NoOfTrips(W, n, k, 0);
	}
	return 0;
}

/*
	N box
	1  2  3  4    N
	w1 w2 w3

*/


