#include <bits/stdc++.h>
using namespace std;


void inputOutput() {
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
}

// Method 1 : Naive Solution
bool isPow2(int n)
{
	if (n == 0)
		return false;
	while (n != 1)
	{
		if (n % 2 != 0)
			return false;
		n = n / 2;
	}
	return true;
}

// Method 2 : Brian kerningam's
// power of 2 only has 1 bit set
bool isPow2(int n)
{
	int res = 0;
	while (n > 0)
	{
		n = n & (n - 1);
		res ++;
	}
	if (res == 1)
		return true;
	return false;
}


// Method 3 : Efficient
bool isPow2(int n)
{
	if (n == 0)
		return false;
	return ((n & (n - 1)) == 0);
}



int main() {
	inputOutput();

	cout << "abc";


	return 0;

}

/*
	Power of two

	I/p: n = 4
	O/p: Yes

	I/p: n = 6
	O/p: No
*/


