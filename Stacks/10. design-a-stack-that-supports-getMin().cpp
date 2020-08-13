#include <bits/stdc++.h>
using namespace std;


void inputOutput() {
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
}


// Naive


// efficient
// store min on top
/*
	push(x)
		ms.push(x);
		if(as.top() >= ms.top())
			as.push(x);
	pop()
		if(ms.top() == as.top())
			ms.pop();
*/





int main() {
	inputOutput();



	return 0;

}


/*
	Design a Stack that supports getMax()

	I/p: push(20), push(10), getMin(), push(5), getMin()
		 pop(), getMin(), pop(), getMin()
	O/p: 10 5 10 20

	I/p: push(5), push(4), push(3), getMin()
		 pop(), getMin(), push(2), getMin()


*/
