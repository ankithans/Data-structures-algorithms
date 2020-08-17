#include <bits/stdc++.h>
using namespace std;


void inputOutput() {
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
}


// Naive Solution
// Time O(n)
// space O(n)
int remDups(int arr[], int n)
{
	int temp[n];
	temp[0] = arr[0];
	int res = 1;
	for (int i = 1; i < n; i ++)
	{
		if (temp[res - 1] != arr[i])
		{
			temp[res] = arr[i];
			res ++;
		}
	}
	for (int i = 0; i < res; i ++)
		arr[i] = temp[i];
	return res;
}

// Efficient
// Time O(n)
// space O(1)
int remDups_eff(int arr[], int n)
{
	int res = 1;
	for (int i = 1; i < n; i ++)
	{
		if (arr[i] != arr[res - 1])
		{
			arr[res] = arr[i];
			res ++;
		}
	}
	return res;
}


int main() {
	inputOutput();

	cout << "abc";

	return 0;

}

/*
	Remove duplicates from a sorted array

*/


