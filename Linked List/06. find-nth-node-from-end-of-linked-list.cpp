#include <bits/stdc++.h>
using namespace std;


void inputOutput() {
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
}

struct Node {
	int key;
	Node *next; // self refrential structure as it has a pointer of self type
	Node(int x)
	{
		key = x;
		next = NULL;
	}
};

// Naive Solution
// two traversals
void printNthFromEnd(Node *head, int n)
{
	int len = 0;
	for (Node *curr = head; curr != NULL; curr = curr -> next)
		len ++;
	if (len < n)
		return;
	Node *curr = head;
	for (int i = 1; i < len - n + 1; i ++)
		curr = curr -> next;
	cout << (curr -> data) << " ";
}

// using pointers
void printNthFromEnd_second(Node *head, int n)
{
	if (head == NULL) return;
	Node *first = head;
	for (int i = 0; i < n; i ++)
	{
		if (first == NULL) return;
		first = first -> next;
	}
	Node *second = head;
	while (first != NULL)
	{
		second = second -> next;
		first = first -> next;
	}
	cout << second -> data;
}


int main() {
	inputOutput();


	return 0;

}

/*
	Find n-th Node from the end of linked list

	I/p: 10 -> 20 -> 30 -> 40 -> 50
		n = 2
	O/p: 40

	I/p: 10 -> 20 -> 30
		n = 3
	O/p: 10

	I/p: 10 -> 20
		n = 3
	O/p:

	I/p: 10 -> 20 -> 30
		n = 1
	O/p: 30


	// using two pointers

		10 -> 20 -> 30 -> 40 -> 50 -> 60 -> 70
		 s			f
			n = 2
		1. Move 'first' two positions ahead
		2. Start a 'second' pointer from head
		3. Move both 'first' and 'second' at
			same speed. When 'first' reaches
			NULL, the 'second' pointer reaches
			required node.

		10 -> 20 -> 30 -> 40 -> 50 -> 60 -> 70 -> NULL
			   s		  f

		10 -> 20 -> 30 -> 40 -> 50 -> 60 -> 70 -> NULL
			   		 s 			 f

		10 -> 20 -> 30 -> 40 -> 50 -> 60 -> 70 -> NULL
			   		 	   s 		   f

		10 -> 20 -> 30 -> 40 -> 50 -> 60 -> 70 -> NULL
			   		 	         s   		 f

		10 -> 20 -> 30 -> 40 -> 50 -> 60 -> 70 -> NULL
									   s 		    f

*/
