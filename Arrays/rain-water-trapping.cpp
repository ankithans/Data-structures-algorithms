#include <bits/stdc++.h>
using namespace std;


void inputOutput() {
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
}

int rainWaterTrapping(int arr[], int n) {
	int res = 0;
	for (int i = 1; i < n - 1; i ++) {

		int left_max = arr[i];
		for (int j = 0; j < i; j ++)
			left_max = max(arr[j], left_max);

		int right_max = arr[i];
		for (int j = i + 1; j < n; j ++)
			right_max = max(arr[j], right_max);

		res = res + (min(left_max, right_max) - arr[i]);
	}
	return res;
}

int rainWaterTrapping_Optimized(int arr[], int n) {
	int res = 0;
	int left_max[n], right_max[n];

	left_max[0] = arr[0];
	for (int i = 1; i < n; i ++)
		left_max[i] = max(arr[i], left_max[i - 1]);

	right_max[0] = arr[0];
	for (int i = n - 2; i >= 0; i --)
		right_max[i] = max(arr[i], right_max[i - 1]);

	for (int i = 0; i < n; i ++)
		res += (min(left_max[i], right_max[i]) - arr[i]);

	return res;

}

int rainWaterTrapping_Optimized_Second(int arr[], int n) {
	int res = 0;
	int l = 0, r = n - 1, left = 0, right = 0;
	// left is the max of all elements from 0 to l - 1
	// right is amx of all elements from r to n - 1

	while (l <= r) {
		if (arr[l] < arr[r]) {
			if (left <= arr[l])
				left = arr[l];
			else
				res += left - arr[i];
			l ++;
		} else {
			if (right <= arr[r])
				right = arr[r];
			else
				ans += right - in[r];
			r --;
		}
	}
	return res;
}




int main() {
	inputOutput();

	cout << rainWaterTrapping_Optimized_Second()

	     return 0;

}


