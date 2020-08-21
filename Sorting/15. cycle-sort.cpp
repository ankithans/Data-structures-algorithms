#include <bits/stdc++.h>
using namespace std;


void inputOutput() {
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
}


// no dups in input arr
void cycleSort(int arr[], int n)
{
	for (int cs = 0; cs < n - 1; cs++)
	{
		int item = arr[cs];
		int pos = cs;
		for (int i = cs + 1; i < n; i++)
			if (arr[i] < item)
				pos++;
		swap(item, arr[pos]);
		while (pos != cs)
		{
			pos = cs;
			for (int i = cs + 1; i < n; i++)
				if (arr[i] < item)
					pos++;
			swap(item, arr[pos]);
		}
	}
}



int main() {
	inputOutput();


	return 0;

}

/*
	Cycle Sort
		1. A worst case O(n^2) sorting algorithm
		2. Does minimum memory writes and can be useful
			for cases where memory write is costly.
		3. In-Place and not stable.
		4. Useful to solve questions like find minimum swaps
			requires to sort an array.
*/


