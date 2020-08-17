#include <bits/stdc++.h>
using namespace std;


void inputOutput() {
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
}

// Naive Solution
void oddAppearing(int arr[], int n)
{
	for (int i = 0; i < n; i ++)
	{
		int count = 0;
		for (int j = 0; j < n; j ++)
			if (arr[i] == arr[j])
				count ++;
		if (count % 2 != 0)
			cout << arr[i];
	}
}


// Efficient solution O(n)
// we divide our input in two grps one having bitset
// and one not having bitset
// as we know when any bit in XOR is set then the 2
// numbers have different bits.
void oddAppearing(int arr[], int n)
{
	int XOR = 0, res1 = 0, res2 = 0;
	for (int i = 0; i < n; i ++) XOR = XOR ^ arr[i];
	int sn = (XOR & ~(XOR - 1));  // rightmost set bit
	for (int i = 0; i < n; i ++)
	{
		if ((arr[i] & sn) != 0)
			res1 = res1 ^ arr[i];
		else
			res2 = res2 ^ arr[i];
	}
	cout << res1 << " " << res2;
}



int main() {
	inputOutput();

	cout << "abc";


	return 0;

}

/*
	Find two odd appearing numbers

	I/p: arr[] = { 3, 4, 3, 4, 5, 4, 4, 6, 7, 7 }
	O/p: 5 6

	I/p: arr[] = { 20, 15, 20, 16 }
	O/p: 15 16

*/


