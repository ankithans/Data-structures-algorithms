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

	stack<int> s;
	s.push(10);
	s.push(20);
	s.push(30);
	// cout << s.size() << endl;
	// cout << s.top() << endl;
	// s.pop();
	// cout << s.top() << endl;

	while (s.empty() == false)
	{
		cout << s.top() << " ";
		s.pop();
	}

	return 0;

}


/*
	 => Linear Data Structure where insertion and deletion both happen
		at the same end.

		   |C|
		   |B|
		   |A|
		   ---

		   LIFO - Last in first out.

		   Operations on stack:
		   	1. push(x): Insert an item x.
		   	2. pop(): Removes the current top.
		   	3. top(): Returns the current top.
		   	4. size(): Return size.


	=> Applications of Stack :
			1. Function Calls.
			2. Checking for Balanced Paranthesis.
			3. Reversing Items.
			4. Infix to Prefix/Postfix.
			5. Evaluation of Postfix/Prefix.
			6. Stack Span Problem and its variations.
			7. Undo/Redo or Forward/Backward.

	Stack in C++ stl - up in the code.

	=> Time Complexity and Internal Working :

			push()
			pop()
			top() ------ O(1)
			size()
			empty()

			Stack can be implemented on any underlying container
			that provides following operators.
				back()
				size()
				empty()
				push_back()
				pop_back()


		    Stack is an conatainer adapters as they are build on
		    top of other containers and they work as a interface.


*/

