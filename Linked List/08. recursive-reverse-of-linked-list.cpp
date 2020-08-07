#include <bits/stdc++.h>
using namespace std;


void inputOutput() {
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
}

struct Node {
	int data;
	Node *next; // self refrential structure as it has a pointer of self type
	Node(int x)
	{
		data = x;
		next = NULL;
	}
};


// Recursive Method 1
Node *recursiveReverse(Node *head)
{
	// Base Cases
	if (head == NULL || head -> next == NULL) return head;

	Node *rest_head = recursiveReverse(head -> next);
	Node *rest_tail = head -> next;
	rest_tail -> next = head;
	head -> next = NULL;
	return rest_head;
}


// Recursive Method 2
Node *recursiveReverse_second(Node *curr, Node *prev)
{
	// Base Case
	if (curr == NULL) return prev;

	Node *next = curr -> next;
	curr -> next = prev;
	return recursiveReverse_second(next, curr);
}


int main() {
	inputOutput();


	return 0;

}

/*
	Reverse a linked list

	I/p: 10 -> 20 -> 30 -> 40
	O/p: 40 -> 30 -> 20 -> 10

	I/p: 10 -> 20 -> 30
	O/p: 30 -> 20 -> 10

	I/p: 10
	O/p: 10

	I/p: NULL
	O/p: NULL

	Working of first :

		x1 -> x2 -> x3 ........ -> xn
		h

		x1 -> x2 <- x3 ........ <- xn
		h	  rt 				   rh

	Working of second :

		traverse the linked list from left to right

		x1 -> x2 -> x3 ........ -> xi-1 -> xi -> xi+1 -> xn

		x1 <- x2 <- x3 ........ <- xi-1    xi -> xi+1 -> xn
									prev  curr
										  prev 	  curr


	prev = NULL	10 -> 20 -> 30
				c

		NULL <- 10    20 -> 30
					  n
				p	  c

		NULL <- 10 <- 20    30
							n
					  p		c

		NULL <- 10 <- 20 <- 30
								n = NULL
							p	c = NULL




*/
