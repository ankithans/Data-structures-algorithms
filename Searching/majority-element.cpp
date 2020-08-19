#include <bits/stdc++.h>
using namespace std;


void inputOutput() {
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
}


// Naive O(n^2)
int findMajority(int arr[], int n)
{
	for (int i = 0; i < n; i ++)
	{
		int count = 1;
		for (int j = i + 1; j < n; j ++)
			if (arr[i] == arr[j])
				count ++;
		if (count > n / 2)
			return i;
	}
	return -1;
}


// Efficient Solution
// Time O(n)
int findMajority(int arr[], int n)
{
	int res = 0, count = 1;
	for (int i = 1; i < n; i ++)
	{
		if (arr[res] == arr[i])
			count ++;
		else
			count --;
		if (count == 0) { res = i; count = 1; }
	}

	count = 0;;
	for (int i = 0; i < n; i ++)
	{
		if (arr[res] == arr[i])
			count ++;
		if (count <= n / 2)
			res = -1;
	}
	return res;
}



int main() {
	inputOutput();

	int arr[] = { 2, 2, 3, 3, 3 };

	return 0;

}





/*
	Majority Element - if an element appears more than n/2 times
						in the arr

	I/p: arr[] = { 8, 3, 4, 8, 8 }
	O/p: 0  or  3  or  4 (Any index of 8)

	I/p: arr[] = { 3, 7, 4, 7, 7, 5 }
	O/p: -1  (No majority)

	I/p: arr[] = { 20, 30, 40, 50, 50, 50, 50 }
	O/p: 3  or  4  or  5  or  6

*/