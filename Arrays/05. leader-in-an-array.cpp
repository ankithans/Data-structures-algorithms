#include <bits/stdc++.h>
using namespace std;


void inputOutput() {
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
}


// An element is said to be leader if there is no bigger ele
// in the right of it.
// Naive Sol - O(n^2)
void leaders(int arr[], int n)
{
	for (int i = 0; i < n; i ++)
	{
		bool flag = false;
		for (int j = i + 1; j < n; j ++)
			if (arr[i] <= arr[j])
			{
				flag = true;
				break;
			}
		if (flag == false)
			cout << arr[i];
	}
}


//Efficient - O(n)
// This prints the leaders from right to left
void leaders_efficient(int arr[], int n)
{
	int curr_ldr = arr[n - 1];
	cout << curr_ldr;

	for (int i = n - 2; i >= 0; i --)
	{
		if (curr_ldr < arr[i])
		{
			curr_ldr = arr[i];
			cout << curr_ldr;
		}
	}
}


int main() {
	inputOutput();

	cout << "abc";

	return 0;

}

/*
	Leader in an array

	I/p: arr[] = { 7, 10, 4, 3, 6, 5, 2 }
	O/p: 10, 6, 5, 2

	I/p: arr[] = { 10, 20, 30 }
	O/p: 30

	I/p: { 30, 20, 10 }
	O/p: 30, 20, 10


*/


