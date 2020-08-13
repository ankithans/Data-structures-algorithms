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


// Naive Solution
// Two traversals
void printMiddle(Node *head)
{
	if (head == NULL) return;
	int count = 0;
	Node *curr;

	for (curr = head; curr != NULL; curr = curr -> next)
		count ++;

	curr = head;
	for (int i = 0; i < count / 2; i ++)
		curr = curr -> next;
	cout << curr -> data;
}


// one traversal
void printMiddle(Node *head)
{
	if (head == NULL) return;
	Node *slow = head, *fast = head;

	// handelling cases for odd and even number of elements
	while (fast != NULL && fast -> next != NULL)
	{
		slow = slow -> next;
		fast = fast -> next -> next;
	}
	cout << slow -> data;
}


int main() {
	inputOutput();


	return 0;

}

/*
	Middle of a linked list -
	we are given a singly linked list we need to find
	middle of it

	I/p: 10 -> 5 -> 20 -> 15 -> 25
	O/p: 20

	I/p: 10 -> 5 -> 20 -> 15 -> 25 -> 30
	O/p: 15

	I/p: 10
	O/p: 10

	I/p: NULL
	O/p:

	I/p: 10 -> 20
	O/p: 20

	// approach second with one taversal
	for Even Nodes :

		10 -> 20 -> 30 -> 40 -> NULL
		s f

		10 -> 20 -> 30 -> 40 -> NULL
			   s	 f

		10 -> 20 -> 30 -> 40 -> NULL
					 s 			 f

	for Odd Nodes :

		10 -> 20 -> 30 -> 40 -> 50 -> NULL
		s f

		10 -> 20 -> 30 -> 40 -> 50 -> NULL
			   s     f

		10 -> 20 -> 30 -> 40 -> 50 -> NULL
					s 			 f


*/
