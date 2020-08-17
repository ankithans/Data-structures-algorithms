#include <bits/stdc++.h>
using namespace std;


void inputOutput() {
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
}


void printPowerSet(string str)
{
	int n = str.length();
	int powerSize = pow(2, n);
	for (int counter = 0; counter < powerSize; counter ++)
	{
		for (int j = 0; j < n; j ++)
		{
			if (counter & (1 << j) != 0)
				cout << str[j];
		}
		cout << endl;
	}
}


int main() {
	inputOutput();

	cout << "abc";


	return 0;

}

/*
	Power set using Bitwise operators

	I/p: s = "abc"
	O/p: "", "a", "b", "c", "ab", "ac", "bc", "abc"

	I/p: s = "ab"
	O/p" "", "a", "b", "ab"


	counter (Decimal)	counter (Binary)	Subset
		0					000				""
		1					001				"a"
		2					010				"b"
		3					011				"ab"
		4					100				"c"
		5					101				"ac"
		6					110				"bc"
		7					111				"abc"

		value varies from (2^n)-1

*/


