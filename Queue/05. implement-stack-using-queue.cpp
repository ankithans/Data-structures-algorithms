#include <bits/stdc++.h>
using namespace std;


void inputOutput() {
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
}

struct Stack
{
	queue<int> q1, q2;
	int top() { return q1.front(); }
	void size(int x) { return q1.size(); }
	int pop() { return q1.front(); }
	int push(int x) {
		while (q1.empty() == false)
		{
			q2.push(q1.top());
			q1.pop();
		}
		q1.push(x);
		while (q2.empty() == false)
		{
			q1.push(q2.top());
			q2.pop();
		}
	}
}


int main() {
	inputOutput();

	return 0;
}



/*
	Consider a situation when we have library available for queue and we
	need stacl library. How to implement the stack.

	1. Implement stack using queue by making the pop operation costly.
	2. Implement stack using only one queue (we use recusion call
		satck here)
	3. Implement Queue using stack.
		1. By making enque() operation costly
		2. By making deque() operation costly
		3. By using one satck(And one recusion call stack)

*/