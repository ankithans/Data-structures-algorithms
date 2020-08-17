#include <bits/stdc++.h>
using namespace std;


void inputOutput() {
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
}


// Time O(n)
void reverse(int arr[], int n)
{
	int low = 0, high = n - 1;
	while (low < high)
	{
		int temp = arr[low];
		arr[low] = arr[high];
		arr[high] = temp;
		low ++;
		high --;
	}
}



int main() {
	inputOutput();

	cout << "abc";

	return 0;

}

/*
	Reverse an array

*/


