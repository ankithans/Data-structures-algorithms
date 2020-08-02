#include <bits/stdc++.h>
using namespace std;


void inputOutput() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}


int main() {
	inputOutput();



	return 0;

}


/*
	given 2 arrays, both arrays have same elements, but second
	array has 1 element missing (which is present in 1st array)
	find the missing element.

	[2, 3, 4, 5]	14
	[2, 3, 5]		10
	14 - 10 is the element
*/