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

	queue<int> q;
	q.push(10);
	q.push(20);
	q.push(30);

	// cout << q.front() << " " << q.back() << endl;
	// q.pop();
	// cout << q.front() << " " << q.back() << endl;

	while (q.empty() == false)
	{
		cout << q.front() << " " << q.back() << endl;
		q.pop();
	}

	cout << q.size();

	return 0;

}

/*
	Queue in stl
		push()
		pop()
		front()
		back()		all O(1)
		empty()
		size()


*/