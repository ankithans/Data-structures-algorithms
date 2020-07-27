#include <bits/stdc++.h>
using namespace std;


void inputOutput() {
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
}

int binarySearch(int arr[], int l, int h, int x) {
	if (l > h)
		return -1;
	int mid = (l + h) / 2;
	if (arr[mid] == x)
		return mid;
	if (arr[mid] > x)
		return binarySearch(arr, l, mid - 1, x);
	else
		return binarySearch(arr, mid + 1, h, x);
}

int binarySearchIterative(int arr[], int l, int h, int x) {
	while (l < h) {
		int mid = (l + h) / 2;
		if (arr[mid] == x)
			return mid;
		if (arr[mid] > x)
			h = mid - 1;
		else
			l = mid + 1;
	}
}

int leftMostIndex(int arr[], int l, int h, int x) {
	if (l > h)
		return -1;
	int mid = (l + h) / 2;
	if (arr[mid] == x && (mid == 0 || arr[mid - 1] != x))
		return mid;
	if (arr[mid] >= x)
		return leftMostIndex(arr, l, mid - 1, x);
	else
		return leftMostIndex(arr, mid + 1, h, x);
}

int rightMostIndex(int arr[], int l, int h, int x, int n) {
	if (l > h)
		return -1;
	int mid = (l + h) / 2;
	if (arr[mid] == x && (mid == n - 1 || arr[mid + 1] != x))
		return mid;
	if (arr[mid] > x)
		return rightMostIndex(arr, l, mid - 1, x, n);
	else
		return rightMostIndex(arr, mid + 1, h, x, n);
}

int countOccurences(int arr[], int l, int h, int x, int n) {
	int leftMostIndexElement = leftMostIndex(arr, l, h, x);
	int rightMostIndexElement = rightMostIndex(arr, l, h, x, n);

	if (leftMostIndexElement == -1 || rightMostIndexElement == -1)
		return -1;
	else
		return (rightMostIndexElement - leftMostIndexElement + 1);
}

int findInInfiniteArray(int arr[], int x) {
	if (arr[0] == x)
		return 0;
	int i = 1;
	while (arr[i] < x) {
		i = i * 2;
		if (arr[i] == x)
			return i;
		else
			return binarySearch(arr, i / 2, i, x);
	}
}

int findPivot(int arr[], int l, int h) {
	if (l < h)
		return -1;
	if (l == h)
		return l;

	int mid = (l + h) / 2;
	if (mid < h && arr[mid] > arr[mid + 1])
		return mid;
	if (mid > l && arr[mid] < arr[mid - 1])
		return mid - 1;
	if (arr[l] >= arr[mid])
		return findPivot(arr, mid + 1, h);
}


int main() {
	inputOutput();

	int arr[] = { 2, 2, 3, 3, 3 };
	cout << countOccurences(arr, 0, 4, 3, 5);

	return 0;

}



/*
	--> Unsorted Array (Linear Search)
		Time Complexity: O(n)

			for(int i = 0; i < n; i ++)
				if(arr[i] == x)
					return x;
			return -1

	--> Given a sorted array and an element x to be searched. Find the index of x if present.
		I/P: arr[] = { 1, 10, 20, 40, 50, 70, 80 } , x = 10
		O/P: 1

		int binarySearch(int arr[], int l, int h, int x) {
			if (l > h)
				return -1;
			int mid = (l + h) / 2;
			if (arr[mid] == x)
				return mid;
			if (arr[mid] > x)
				return binarySearch(arr, l, mid - 1, x);
			else
				return binarySearch(arr, mid + 1, h, x);
		}

	    int binarySearchIterative(int arr[], int l, int h, int x) {
			while (l < h) {
				int mid = (l + h) / 2;
				if (arr[mid] == x)
					return mid;
				if (arr[mid] > x)
					h = mid - 1;
				else
					l = mid + 1;
			}
		}

	--> Given a sorted array with repititions, find left most index of an element.
		I/P: arr[] { 2, 3, 3, 3, 3 } , x = 3
		O/p: 1

		int leftMostIndex(int arr[], int l, int h, int x) {
			if (l > h)
				return -1;
			int mid = (l + h) / 2;
			if (arr[mid] == x && (mid == 0 || arr[mid - 1] != x))
				return mid;
			if (arr[mid] >= x)
				return leftMostIndex(arr, l, mid - 1, x);
			else
				return leftMostIndex(arr, mid + 1, h, x);
		}

	--> Given an sorted array with repititions, count the occurences of the element.
		I/P: arr[] { 2, 3, 3, 3, 3 }, x = 3
		O/p: 4

		one approach is that we find the element and then got to left and right of element and count
		the no of occurences. but this will take O(k + logn) time and in worst case it will O(n).

		Another approach is we find left most index and rightmost index in logn time.
		Then right - left + 1 will give the number of occurences.

		int leftMostIndex(int arr[], int l, int h, int x) {
			if (l > h)
				return -1;
			int mid = (l + h) / 2;
			if (arr[mid] == x && (mid == 0 || arr[mid - 1] != x))
				return mid;
			if (arr[mid] >= x)
				return leftMostIndex(arr, l, mid - 1, x);
			else
				return leftMostIndex(arr, mid + 1, h, x);
		}

		int rightMostIndex(int arr[], int l, int h, int x, int n) {
			if (l > h)
				return -1;
			int mid = (l + h) / 2;
			if (arr[mid] == x && (mid == n - 1 || arr[mid + 1] != x))
				return mid;
			if (arr[mid] > x)
				return rightMostIndex(arr, l, mid - 1, x, n);
			else
				return rightMostIndex(arr, mid + 1, h, x, n);
		}

		int countOccurences(int arr[], int l, int h, int x, int n) {
			int leftMostIndexElement = leftMostIndex(arr, l, h, x);
			int rightMostIndexElement = rightMostIndex(arr, l, h, x, n);

			if (leftMostIndexElement == -1 || rightMostIndexElement == -1)
				return -1;
			else
				return (rightMostIndexElement - leftMostIndexElement + 1);
		}


		--> Count 1's in a sorted binary array
			I/P: arr[] = { 0, 0, 1, 1, 1, 1 }
			O/P: 4

			I/P: arr[] = { 1, 1, 1, 1, 1 }
			O/P: 5

			Solution - Same as previous


		--> Given an infinite sized sorted array and an element x, find
			if x is present in the array or not.

			I/P: arr[] = { 10 ,20 ,25, 50, 70 , 80, ...... }, x = 20
			O/P: 1

			int binarySearch(int arr[], int l, int h, int x) {
				if (l > h)
					return -1;
				int mid = (l + h) / 2;
				if (arr[mid] == x)
					return mid;
				if (arr[mid] > x)
					return binarySearch(arr, l, mid - 1, x);
				else
					return binarySearch(arr, mid + 1, h, x);
			}

			int findInInfiniteArray(int arr[], int x) {
				if(arr[0] == x)
					return 0;
				int i = 1;
				while(arr[i] < x) {
					i = i * 2;
					if(arr[i] == x)
						return i;
					else
						return binarySearch(arr, i/2, i, x);
				}
			}

			Time: O(logi)

					i=4
					100>20
                    i=2
			{ 1, 8, 20, 40, 80, 90, 100, 120, 140 .......  } , x = 100
			i=0 i=1			i=4				  i=8
				100>8		100>80			  100<140
				i=i*2		i=8				  binarySearch(arr, 4, 8, 100) - it will give the
																			 postion of 100.


		--> Given an sorted and rotated array of distinct elements, and an element x, find
			if x is present in the array or not.

			{ 10, 20, 40, 5, 6, 7, 8 }
			{ 10, 20, 1, 2, 3, 4, 5 }
			{ 10, 20 ,30, 40, 50, 60, 1 }

			we will first find out the pivot element that will be the max element of the array.
			we will get two sorted arrays and we can apply binary search on both the arrays.
			How can we find out the pivot element ? -- we will compare the middle element with
			the corner element.

			{ 10, 20, 40, 5, 6, 7, 8 } here 5<10
			{ 10, 20, 1, 2, 3, 4, 5 }  here 2<10 so disturbed array is 10, 20, 1, 2 here pivot is present
			{ 10, 20 ,30, 40, 50, 60, 1 } here 40>10 so pivot is b/w 40 to 1


*/