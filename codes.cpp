#include <bits/stdc++.h>
using namespace std;


void inputOutput() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}


int count(int a, int b)
{
	int c = a ^ b;
	int flip = 0;
	while (c != 0)
	{
		c = c & (c - 1);
		flip++;
	}
	return flip;
}

int count1(int a, int b)
{
	int c = 0;
	while (a != 0 || b != 0)
	{
		int a1 = a & 1, b1 = b & 1;
		if (a1 != b1)
			c++;

		a >>= 1;
		b >>= 1;
	}
	return c;
}


int main() {
	inputOutput();

	cout << count1(10, 20);

	return 0;
}



