#include <bits/stdc++.h>
using namespace std;


void inputOutput() {
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
}

/*
	Median of a stream

	I/p: arr[] = { 25, 7, 10, 15, 20 }
	O/p: 		   25 16  10 12.5 15

	Sequence				Median
	{ 25 					25
	{ 25, 7					(25 + 7) / 2 = 16
	{ 25, 7, 10				10
	{ 25, 7, 10, 15			(10 + 15) / 2 = 12.5
	{ 25, 7, 10, 15, 20 }	15

	==> Method 1. Naive Solution (Maintain sorted array) -> O(n^2)
			temp[] = 25 			size = 1
			temp[] = 7 25			size = 2
			temp[] = 7 10 25		size = 3
			temp[] = 7 10 15 20 	size = 4
			temp[] = 7 10 15 20 25  size = 5

			if(size % 2 != 0)
				return temp[size / 2];
			else
				return (temp[size / 2] + temp[(size - 1) / 2]) / 2;


	==> Method 2. Better Solution (Augumented BST) - O(nh)


	==> Method 3. Efficient Solution O(nlogn)

			I/p: arr[] = { 25, 7, 10, 15, 20 }
			O/p: 		   25 16  10 12.5 15


		Initial :
		i = 0   :	25					25
		i = 1 	:	7			25		(7 + 25) / 2 = 16
		i = 2  	: 	7 10		25		10
		i = 3 	:	7 10    	15 25	(10 + 15) / 2 = 12.5
		i = 4 	:	7 10 15		20 25	15
*/
void printMedians(int arr[], int n)
{
	priority_queue<int> s;
	priority_queue<int, vector<int>, greater<int>> g;
	s.push(arr[0]);
	cout << arr[0] << endl;
	for (int i = 1; i < n; i++)
	{
		int x = arr[i];
		if (s.size() > g.size())
		{
			if (s.top() > x)
			{
				g.push(s.top());
				s.pop();
				s.push(x);
			}
			else g.push(x);
			cout << (s.top() + g.top()) / 2.0 << endl;

		}
		else {
			if (x <= s.top())
				s.push(x);
			else {
				g.push(x);
				s.push(g.top());
				g.pop();
			}
			cout << s.top() << endl;
		}
	}
}



int main() {
	inputOutput();


	return 0;
}



