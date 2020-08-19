#include <bits/stdc++.h>
using namespace std;


void inputOutput() {
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
}


// Two pointer approach
// Time O(n)
bool isPair(int arr[], int n, int x)
{
	int left = 0, right = n - 1;
	while (left < right)
	{
		if (arr[left] + arr[right] == x)
			return true;
		else if (arr[left] + arr[right] > x)
			right --;
		else
			left ++;
	}
	return false;
}




int main() {
	inputOutput();

	int arr[] = { 2, 2, 3, 3, 3 };

	return 0;

}



/*
	--> Given an unsorted array and a number x, we need to find if there is a
		pair in the array with sum equals to x.

		I/p: arr[] = { 3, 5, 9, 2, 8, 10, 11 }
					x = 17
		O/p: yes
		there is a pair (9, 8)

		I/p: arr[] = { 8, 4, 6 }
					x = 11
		O/p: no

		// naive
		// O(n^2)
		// can be optimized using hashing
		for(int i = 0; i < n; i ++)
			for(int j = i + 1; j < n; j ++)
				if(arr[i] + arr[j] == x)
					return true;
		return false;


	--> Two pointer approach
		Given a sorted array and a sum, find if there is a pair with given
		sum.

		I/p: arr[] = { 2, 5, 8, 12, 30 }
			x = 17
		O/p: yes
			pair is 5, 12

		I/p: arr[] = { 3, 8, 13, 18 }
			x = 14
		O/p: no


	--> Given a sorted array and a sum, find if there is a triplet
		with given sum.

		I/p: arr[] = { 2, 3, 4, 8, 9, 20, 40 }
			x = 32
		O/p: yes
			4 + 8 + 20

		// naive
		// O(n^3)
		for(int i = 0; i < n; i ++)
			for(int j = i + 1; j < n; j ++)
				for(int k = j + 1; k < n; k ++)
					if(arr[i] + arr[j] + arr[k] == x)
						return true;
		return false;


		// O(n^2)
		for(int i = 0; i < n; i ++)
			if(isPair(a, i + 1, n -1, x - a[i]))
				return true;
		return false;

		// if we are given an unsorted array for finding triplet
			1. sort O(nlogn)
			2. then search O(n^2)
			overall O(n^2)

	--> counting pairs with given sum
	--> count triplets with given sum
	--> find if there is a triplet a, b, c such that a^2 + b^2 = c^2

*/