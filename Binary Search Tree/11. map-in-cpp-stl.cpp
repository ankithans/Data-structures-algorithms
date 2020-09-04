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

	map<int, int> m;
	m.insert({10, 200});
	m[5] = 100;
	m.insert({3, 300});
	for (auto &x : m)
		cout << x.first << " " << x.second << " ";


	m.insert({10, 200});
	cout << m.size() << " ";
	cout << m[20] << " ";
	cout << m.size() << " ";

	m.at(10) = 300;


	return 0;
}





/*
	begin(), end(), rbegin(), rend(), size(), empty() ---> O(1)

	count(), find(), erase(key), insert(), [] ---> O(logn)

*/