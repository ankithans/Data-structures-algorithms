#include <bits/stdc++.h>
using namespace std;


void inputOutput() {
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
}


// Naive Solution
for (int i = 0; i < n; i ++)
{
	int count = 0;
	for (int j = 0; j < n; j ++)
		if (arr[j] == arr[i])
			count ++;
	if (count % 2 != 0)
		cout << arr[i];
}

// Efficient Solution O(n) time
int findodd(int arr[], int n)
{
	int res = 0;
	for (int i = 0; i < n; i ++)
		res = res ^ arr[i];
	return res;
}



int main() {
	inputOutput();

	cout << "abc";


	return 0;

}

/*
	Find the only odd ocurring number

	I/p: arr[] = { 4, 3, 4, 4, 4, 5, 5 }
	O/p: 3

	I/p: arr[] = { 8, 7, 7, 8, 8 }
	O/p: 8

	Variation question :
	Given an array of n numbers that has values in range
	[1 2 .... n + 1]. Every no. appear exactly once. Hence
	one no is missing. Find the missing no..

	(1^2^3...^n+1) ^ (arr[0]^arr[1]^....^arr[n-1])
	this will give the answer
*/


