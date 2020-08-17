#include <bits/stdc++.h>
using namespace std;


void inputOutput() {
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
}

// Method 1 : (left shift)
void kthBit(int n, int k)
{
	if (n & (1 << (k - 1)) != 0)
		cout << "Yes";
	else
		cout << "No";
}

// Method - 2 (Right Shift)
void kthBit_rightShift(int n, int k)
{
	if ((n >> (k - 1)) & 1)
		cout << "Yes";
	else
		cout << "No";
}



int main() {
	inputOutput();

	cout << "abc";


	return 0;

}

/*
	Check if kth bit is a set

	I/p: n = 5, k = 1
	O/p: Yes

	I/p: n = 8, k = 2
	O/p: No

	I/p: n = 0, k = 3
	O/p: No

	k <= No of bits in binary representation

*/


