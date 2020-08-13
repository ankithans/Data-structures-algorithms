#include <bits/stdc++.h>
using namespace std;


void inputOutput() {
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
}

// Naive Solution
// O(n^2)
void printPrevGreeer(int arr[], int n)
{
	for (int i = 0; i < n; i ++)
	{
		int j;
		for (j = i - 1; j >= 0; j --)
		{
			if (arr[j] > arr[i])
			{
				cout << arr[j] << " ";
				break;
			}
		}
		if (j == -1)
			cout << -1 << " ";
	}
}



// Efficient
// O(n)
void printPrevGreater_second(int arr[], int n)
{
	stack<int> s;
	s.push(arr[0]);
	for (int i = 0; i < n; i ++)
	{
		while (s.empty() == false && s.top() <= arr[i])
			s.pop();
		int  pg = (s.empty()) ? -1 : s.top();
		cout << pg << " ";
		s.push(arr[i]);
	}
}


int main() {
	inputOutput();

	int arr[] = { 20, 30, 10, 5, 15 };
	printPrevGreater_second(arr, 5);




	return 0;

}


/*
	Given an array of distinct integers, find closest (position - wise)
	greater on left of every element. If there is no greater
	element on the left, then print -1;

	I/p: arr[] = { 15, 10, 18, 12, 4, 6, 2, 8 }
	O/p: 		   -1  15  -1  18  12 12 6  12

	I/p: arr[] = { 8, 10, 12 }
	O/p: 		   -1 -1  -1

	I/p: arr[] = { 12, 10, 8 }
	O/p: 		   -1  12  10

*/
