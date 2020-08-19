#include <bits/stdc++.h>
using namespace std;


void inputOutput() {
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
}


void iSort(int arr[], int n)
{
	for (int i = 0; i < n; i ++)
	{
		int key = arr[i];
		int j = i - 1;
		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j --;
		}
		arr[j + 1] = key;
	}
}


int main() {
	inputOutput();


	return 0;

}

/*
	Insertion Sort
	here we traverse for every element
	we take care that all prev ele are sorted

	we are starting from the second element beacause single ele is
	considered to be sorted we are moving towards the right side
	and while moving we are finding the postions where this ele has to
	be put. since u have to insert in the middle u are moving all the greater
	elements one position ahead. so we create a space for it.


	{ 50, 20, 40, 60, 10, 30 }

	1. O(n^2) worst case
	2. In-Place and stable
	3. used in practice for small arrays (used in timesort and introsort)
	4. O(n) in Best Case

	Best case : Sorted O(n)
	worst case : Reversed sorted O(n^2)
*/


