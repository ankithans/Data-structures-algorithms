#include <bits/stdc++.h>
using namespace std;


void inputOutput() {
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
}


// O(n^2)
// Naive Solution
void stockSpan(int arr[], int n)
{
	for (int i = 0; i < n; i ++)
	{
		int span = 1;
		for (int j = i - 1; j >= 0; j --)
		{
			if (arr[j] <= arr[i])
				span ++;
			else
				break;
		}
		cout << span << " ";
	}
}

// Efficient Solution
stack<int> s;
s.push(0);
for (int i = 1; i < n; i ++)
	while (s.empty == false && arr[s.top()] <= arr[i])
		s.pop();
int span = (s.empty()) ? (i + 1) : (i - s.top());
cout << span << " ";
s.push(i);





int main() {
	inputOutput();

	int arr[] = { 15, 13, 12, 14, 16, 8, 6, 4, 10, 30 };
	stockSpan(arr, 10);


	return 0;

}


/*
	Stock Span problem and its variations.

	I/p: arr[] = { 15, 13, 12, 14, 16, 8, 6, 4, 10, 30 }
	O/p: 		   1   1   1   3	5  1  1  1   4  10

	I/p: arr[] = { 10, 20, 30, 40 }
	O/p: 		   1    2   3   4

	I/p: arr[] = { 40, 30, 20, 10 }
	O/p: 		   1    1   1   1

*/
