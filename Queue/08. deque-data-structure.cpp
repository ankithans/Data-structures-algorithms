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

	// deque<int> dq = { 10, 20, 30 };
	// dq.push_front(5);
	// dq.push_back(50);
	// for (auto x : dq)
	// 	cout << x << " ";
	// cout << dq.front() << " " << dq.back();

	// deque<int> dq = { 10, 15, 30, 5, 12 };
	// auto it = dq.begin();
	// it ++;
	// dq.input(it, 20);
	// dq.pop_front();
	// dq.pop_back();
	// cout << dq.size();

	deque<int> dq = { 10, 20, 5, 30 };
	auto it = dq.begin();
	it = dq.insert(it, 7);
	it = dq.insert(it, 2, 3);
	it = dq.erase(it + 1);
	cout << (*it) << endl;
	for (int i = 0; i < dq.size(); i ++)
		cout << dq[i];

	return 0;
}



/*
	Deque functions :
		InsertFront()
		DeleteFront()
		InsertRear()
		DeleteRear()
		getFront()
		getRear()
		isFull()
		isEmpty()
		size()

	Implementation :
		1. Linked List : Doubly Linked list with front and rear pointersin c++
		2. Array : Circular Array with front and rear indexes.
					We can also maintain front and size. we can
					always get rear using these 2.


	Applications of Deque :
		1. A deque can be used as both stack and Queues.
		2. Maintaining History of actions.
		3. A Steal Process Scheduling Algorithm
		4. Implementing a Priority Queue with two types of priorities.
		5. Maximum/Minimum of all subarrays of size k in an array.


*/