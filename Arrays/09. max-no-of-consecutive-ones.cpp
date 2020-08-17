#include <bits/stdc++.h>
using namespace std;


void inputOutput() {
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
}


// Naive Solution
// Time O(n^2)
int maxConsecutiveOnes(bool arr[], int n)
{
	int res = 0;
	for (int i = 0; i < n; i ++)
	{
		int curr = 0;
		for (int j = i; j < n; j ++)
		{
			if (arr[j] == 1)
				cur ++;
			else break;
		}
		res = max(res, curr);
	}
	return res;
}


// Efficient
// Time O(n)
int maxConsecutiveOnes_second(bool arr[], int n)
{
	int res = 0;
	for (int i = 0; i < n; i ++)
	{
		if (arr[i] == 0)
			curr = 0;
		else
		{
			curr ++;
			res = max(res, curr);
		}
	}
}



int main() {
	inputOutput();

	cout << "abc";

	return 0;

}

/*
	Max Consecutive 1's om a Binary Array

	I/p: arr[] = { 0, 1, 1, 0, 1, 0 }
	O/p: 2

	I/p: arr[] = { 1, 1, 1, 1 }
	O/p: 4

	I/p: arr[] = { 0, 0, 0, 0 }
	O/p: 0

	I/p: arr[] = { 1, 0, 1, 1, 1, 1, 0, 1, 1 }
	O/p: 4


*/


