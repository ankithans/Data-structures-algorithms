#include <bits/stdc++.h>
using namespace std;


void inputOutput() {
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
}


struct Interval {
	int start; int end;
};


// Naive solution
// O(n^3)


// Efficient solution
// sort by start time in increasing order
// or
// sort end time in decreasing order
// O(nlogn)
void mergeIntervals(Interval arr[], int n)
{
	sort(arr, arr + m, myComp);
	int res = 0;
	for (int i = 1; i < n; i++)
		if (arr[res].end >= arr[i].start)
		{
			arr[res].end = max(arr[res].end, arr[i].end);
			arr[res].start = min(arr[res].start, arr[i].start);
		}
		else {
			res ++;
			arr[res] = arr[i];
		}

	for (int i = 0; i <= res; i++)
		cout << arr[i].start << " " << arr[i].end << endl;
}




int main() {
	inputOutput();


	return 0;

}

/*
	Merge overlapping intervels

	I/p: { {1, 3}, {2, 4}, {5, 7}, {6, 8} }
	O/p: { {1, 4}, { 5, 8 } }

	I/p: { {7, 9}, { 6, 10 }, { 4, 5 }, { 1, 3 }, { 2, 4 } }
	O/p: { { 1, 5 }, { 6, 10 } }

	How to check if two intervals overlap ?
	take bigger starting element from both intervals
	and check if its present in the range of other interval
	i1 = { 5, 10 }
	i2 = { 1, 7 }

	i1 = { 10, 20 }
	i2 = { 5, 15 }

	i1 = { 10, 20 }
	i2 = { 100, 200 }

	take smaller value of end values
	check if present in range of other interval
*/


