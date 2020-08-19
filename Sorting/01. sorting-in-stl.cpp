#include <bits/stdc++.h>
using namespace std;


void inputOutput() {
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
}

struct Point {
	int x, y;
};
bool myComp(Point p1, Point p2)
{ return (p1.y < p2.y); }

int main() {
	inputOutput();

	// int arr[] = { 10, 20, 5, 7 };
	// int n = 4;
	// sort(arr, arr + n);

	// for (int x : arr)
	// 	cout << x << " ";

	// sort(arr, arr + n, greater<int>());

	// cout << endl;

	// for (int x : arr)
	// 	cout << x << " ";

	// sorting structure
	Point arr[] = { {3, 10}, {2, 8}, {5, 4} };
	int n = 3;
	sort(arr, arr + n, myComp);
	for (auto i : arr)
		cout << i.x << " " << i.y << endl;

	return 0;

}

/*
	worst case and avg case : O(nlogn)
	uses IntroSort (Hybrid of Quicksort, heapSort, Insertion sort)
*/


