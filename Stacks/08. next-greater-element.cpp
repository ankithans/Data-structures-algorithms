#include <bits/stdc++.h>
using namespace std;


void inputOutput() {
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
}

// Naive Solution
void nextGreater(int arr[], int n)
{
	for (int i = 0; i < n; i ++)
	{
		int j;
		for (j = i + 1; j < n; j ++)
		{
			if (arr[j] > arr[i])
			{
				cout << arr[j] << " ";
				break;
			}
		}
		if (j == n)
			cout << -1 << " ";
	}
}

// O(n)
void nextGreater_second(int arr[], int n)
{
	stack<int> s;
	s.push(arr[n - 1]); cout << "-1" << " ";
	for (int i = n - 2; i >= 0; i --)
	{
		while (s.empty() == false && s.top() <= arr[i])
			s.pop();
		int nextGre = (s.empty()) ? -1 : s.top();
		cout << nextGre << " ";
		s.push(arr[i]);
	}
}
// Prints the output in reverse order


int main() {
	inputOutput();

	int arr[] = { 20, 30, 10, 5, 15 };
	printPrevGreater_second(arr, 5);


	return 0;

}


/*
	Next Greater Element
	Given an array of integers, find NextGreater(Position-wise closest and
	on right side) for every element.

	I/p: arr[] = { 5, 15, 10, 8, 6, 12, 9, 18 }
	O/p: 		  15  18  12 12 12  18  18 -1

	I/p: arr[] = { 10, 15, 20, 25 }
	O/p: 		   15  20  25  -1

	I/p: arr[] = { 25, 20, 15, 10 }
	O/p: 		   -1  -1  -1  -1


*/
