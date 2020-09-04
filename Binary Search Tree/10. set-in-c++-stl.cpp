#include <bits/stdc++.h>
using namespace std;


void inputOutput() {
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
}

struct Test {
	int x;
	bool operator<(const Test &t) const
	{
		return (this -> x < t.x);
	}
}

int main() {
	inputOutput();

	// set<int> s; // set<int, greater<int>> s; // decreasing
	// s.insert(10);
	// s.insert(5);
	// s.insert(20);

	// for (int x : s)
	// 	cout << x << " ";

	// for (auto it = s.begin(); it != s.end(); it++) // rbegin(), rend()
	// 	cout << *it << " ";

	// if (s.find(10) == s.end())
	// 	cout << "Not Found\n";
	// else
	// 	cout << "Found\n";

	// if (s.count(10))
	// 	cout << "Found";

	// s.clear();
	// cout << s.size();

	// s.erase(5);
	// auto it = s.find(7);
	// s.erase(it, s.end());

	set<Test> s;
	s.insert({5});
	s.insert({20});
	s.insert({10});

	for (Test t : s)
		cout << t.x << " ";


	return 0;
}





/*
	begin(), end(), rbegin(), rend(), cbegin(), cend(), crbegin(),
	crend(), size(), empty() ----> O(1)

	insert(), find(), count(), lower_bound(), upper_bound(),
	erase(val) ----> O(logn)

	erase(it) ----> Amortized O(1)


	Applications
		1. Sorted Stream of Data
		2. Doubly Ended Priority Queue

*/