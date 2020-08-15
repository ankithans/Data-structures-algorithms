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

	cout << "abc";


	return 0;

}

/*
	Queue works like a normal queue
	FIFO -> First in First out

	Enqueue (Add an Item)
	Dequeqe (Remove an Item)

	More Opearations:
		enqueue() -> push
		Dequeqe() -> pop
		front() -> front
		size() -> size
		isEmpty() -> empty

	Applications of queue ds :
		1. Single Resource and multiple consumers to be served according
			to their arrival order.
		2. Syncronization b/w slow and fast devices (used as a buffer)
		3. In OS
			1. Semahores
			2. FCFC scheduling
			3. Buffer for devices like keyboard
			4. spooling in printers or other devices.
		4. In Neworks
			1. Queues in return switches
			2. Mail Queues
		5. Many real world applications like doctors queue
		6. Variation(Dequeue, Prioriety Queue and Doubly ended Prioriety Queue)

*/