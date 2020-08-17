#include <bits/stdc++.h>
using namespace std;


void inputOutput() {
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
}


// Naive Solution
// time - O(Total Bits in n)
int countSet(int n)
{
	int res = 0;
	while (n > 0)
	{
		if (n % 2 != 0)  // if(n & 1)
			res ++;		 // 	res ++; 	/* or res+=(n & 1) */
		n = n / 2;		 // n = n >> 1;
	}
}

// Brians Kerningam's Algorithm
// O(set Bit Count)
int countBits(int n)
{
	int res = 0;
	while (n > 0)
	{
		n = (n & (n - 1)); // Turns of the right most bit
		res ++;
	}
	return res;
}

// Lookup table method
// time O(1)
int table[256];
void initialize()
{
	table[0] = 0;
	for (int i = 1; i < 256; i ++)
		table[i] = (i & 1) + table[i / 2];
}
int count(int n)
{
	int res = table[n & 0xff];
	n = n >> 8;
	res = res + table[n & 0xff];
	n = n >> 8;
	res = res + table[n & 0xff];
	n = n >> 8;
	res = res + table[n & 0xff];
	return res;
}


int main() {
	inputOutput();

	cout << "abc";


	return 0;

}

/*
	count set bits

	I/p: n = 5
	O/p: 2

	I/p: n = 7
	O/p: 3

	I/p: n = 13
	O/p: 3

*/


