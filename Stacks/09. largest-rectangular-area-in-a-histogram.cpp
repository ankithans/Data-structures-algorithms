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
// we consider every element as the smallest bar the bar with min height
// and we find the area of rec being this bar as smallest.
int getMaxArea(int arr[], int n)
{
	int res = 0;
	for (int i = 0; i < n; i ++)
	{
		int curr = arr[i];
		for (int j = i - 1; i >= 0; j --)
		{
			if (arr[j] >= arr[i]) curr += arr[i];
			else break;
		}
		for (int j = i + 1; j < n; j ++)
		{
			if (arr[j] >= arr[i]) curr += arr[i];
			else break;
		}
		res = max(res, curr);
	}
	return res;
}


// Better Solution
// O(n)
/*
	1. Initialize: res = 0
	2. Find prev smaller element for every element
	3. Find next smaller element for every element
	4. Do the following for ever ele arr[i]
		curr = arr[i];
		curr += (i - ps[i] - 1)*arr[i]
		curr += (ns[i] - i - 1)*arr[i]
		res = max(res, curr)
	5. return res

*/


// Efficient Solution
/*
	1. Create a stack s.
	2. int res = 0;
	3. for(int i = 0; i < n; i ++)
		{
			while(s.empty() == false && arr[s - top()] >= arr[i])
			{
				tp = s.pop();
				curr = arr[tp] * (s.empty() ? i : (i - s.top() - 1));
				res = max(res, curr);
			}
			s.push(i);
			while(s.empty() == false)
			{
				tp = s.pop();
				curr = arr[tp] * (s.empty() ? n : (n - s.top() - 1));
				res = max(res, curr);
			}
			return res;
		}
*/


int main() {
	inputOutput();

	int arr[] = { 20, 30, 10, 5, 15 };
	printPrevGreater_second(arr, 5);


	return 0;

}


/*
	Largest Rectangular Area in a Histogram
	https://www.geeksforgeeks.org/largest-rectangle-under-histogram/

	I/p: arr[] = { 6, 2, 5, 4, 1, 5, 6 }
	O/p: 10

	I/p: arr[] = { 2, 5, 1 }
	O/p: 5


*/
