#include <bits/stdc++.h>
using namespace std;


void inputOutput() {
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
}


int main() {
	inputOutput();



	return 0;

}


/*
	need to implement LRU cache
	Least Recently used

	if u want to insert something :
		1. cache is full :
			a. remove least recently used one and new one
		2. Your cache is not full :
			a. Already present in the cache
			b. Already not in the cache

*/

