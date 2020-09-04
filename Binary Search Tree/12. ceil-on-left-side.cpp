#include <bits/stdc++.h>
using namespace std;


void inputOutput() {
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
}


// Time : O(n^2)
// aux space O(1)
void printCeiling(int arr[], int n)
{
	cout << -1;
	for (int i = 1; i < n; i++)
	{
		int diff = INT_MAX;
		for (int j = 0; j < i; j++ +)
			if (arr[j] >= arr[i])
				diff = min(diff, arr[j] - arr[i]);
		if (diff == INT_MAX)
			cout << -1;
		else
			cout << arr[i] + diff;
	}
}

// Efficient Solution O(nlogn)
// use self balancing BST
void printCeiling_second(int arr[], int n)
{
	/* cout << -1;
	// 1. create a self-balancing BST (set)
	// 2. Insert a[0] into s
	// 3. for(int i = 1; i < n; i++)
	//	  {
			// if(s conatins a ceiling of arr[i]) // lower_bound
			// 		print the ceiling
			// else
			//		print -1;
			// Insert arr[i] into s
	//    }
	*/
}



int main() {
	inputOutput();

	return 0;
}


/*
	Ceiling on left side
	smallest equal or greater element on the left side

	I/p: arr[] = { 2, 8, 30, 15, 25, 12 }
	O/p: 		  -1 -1  -1  30  30  15

	I/p: arr[] = { 30, 20, 10 }
	O/p: 		   -1  30  20

	I/p: arrp[] = { 10, 20, 30 }
	O/p: 		    -1  -1  -1

	I/p: arr[] = { 6, 18, 4, 5 }
	O/p:  		  -1  -1  6  6

*/