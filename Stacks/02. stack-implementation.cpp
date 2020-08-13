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
	=> Stack Implementation:
		both implementation serving for O(1)
			1. Array Implementation :
				we maintain a top var whichpoints to the top element in
				the stack.
				initially top = -1;

				push(x)
				{
					if(top == cap - 1) { } // handle overslow
					top ++;
					arr[top] = x;
				}

				pop()
				{
					if(top = -1) { } // handle underflow
					res = arr[top];
					top --;
					return res;
				}

			2. Linked List Implementation :
				Initially head = NULL

				push(x)
				{
					temp = new Node(x);
					temp -> next = head;
					head = temp;
				}

				pop()
				{
					if(head == NULL) return;
					res = head -> data;
					temp = head;
					head = head -> next;
					delete(temp);
					return res;
				}

*/

