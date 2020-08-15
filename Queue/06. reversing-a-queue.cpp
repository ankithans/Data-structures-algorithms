#include <bits/stdc++.h>
using namespace std;


void inputOutput() {
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
}

// Iterative
void reverse(queue<int> &q)
{
	stack<int> s;
	while (q.empty() == false)
	{
		s.push(q.top());
		q.pop();
	}
	while (s.empty() == false)
	{
		q.push(s.top());
		s.pop();
	}
}

// Recursive
void reverse_second(queue<int> &q)
{
	if (q.empty())
		return;
	int x = q.top();
	q.pop();
	reverse_second(q);
	q.push(x);
}



int main() {
	inputOutput();

	return 0;
}



/*
	Reversing a Queue
	Given a queue, we need to reverse it.

	I/p: q = { 10, 5, 15, 20 }
	O/p: q = { 20, 15, 5, 10 }


*/