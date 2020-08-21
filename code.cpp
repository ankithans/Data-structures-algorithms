#include <bits/stdc++.h>
using namespace std;


void inputOutput() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}


int main() {
	inputOutput();

	int t; cin >> t;
	while (t--)
	{
		int n, k;
		cin >> n >> k;

		// int res = INT_MAX;
		// for (int i = 0; i < n; i ++)
		// {
		// 	int a = (abs(i - 0) - abs(n - i));
		// 	if (a == 0)
		// 		res = 0;
		// 	else
		// 		res = abs(n - k);
		// }
		// if (res != INT_MAX)
		// 	cout << res << endl;

		int b = k;
		int c = n + k;
		int a = (n - k);

		int res = min(b, min(a, c));


		cout << abs(res) << endl;


	}


	return 0;

}


