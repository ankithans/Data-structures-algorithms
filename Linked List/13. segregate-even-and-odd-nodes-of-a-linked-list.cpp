#include <bits/stdc++.h>
using namespace std;


void inputOutput() {
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
}

struct Node
{
	int data;
	Node *next; // self refrential structure as it has a pointer of self type
	Node(int x)
	{
		data = x;
		next = NULL;
	}
};


// Naive Solution
// req two traversals
// idea is to get pointer to the last node of list. And then
// traverse the list from starting and move the odd valued nodes
// from their curr pos to end of the list.
// void segregateEvenOdd(Node *head)
// {
// 	Node *end = head;
// 	Node *prev = NULL;
// 	Node *curr = head;

// 	while (end -> next != NULL)
// 		end = end -> next;

// 	while (curr -> data % 2 != 0 && curr != end)
// 	{
// 		end -> next = curr;
// 		curr = curr -> next;
// 		end -> next -> next = NULL;
// 	}
// }


// we traverse the linked list from beg to end
// while traversing we keep connecting even
// nodes together. in the form of a even linked list
// es = ee = NULL, while traversing when we are connecting
// these nodes we keep track of even end, we keep
// updating the even end. ||ly we keep conecting odd nodes
// after forming these two list we simply make
// ee -> os and we are done.
Node *segregate(Node *head)
{
	Node *eS = NULL, *eE = NULL, *oS = NULL, *oE = NULL;
	for (Node *curr = head; curr != NULL; curr = curr -> next)
	{
		int x = curr -> data;
		if (x % 2 == 0)
		{
			if (eS == NULL)
			{
				eS = curr;
				eE = eS;
			} else {
				eE -> next = curr;
				eE = eE -> next;
			}
		} else {
			if (oS == NULL)
			{
				oS = curr;
				oE = oS;
			} else {
				oE -> next = curr;
				oE = oE -> next;
			}
		}
	}
	if (oS == NULL || eS == NULL)
		return NULL;
	eE -> next = oS;
	oE -> next = NULL;
	return eS;
}

Node *push(Node *head, int data)
{
	Node *temp = new Node(data);
	temp -> next = head;
	return temp;
}

void printList(Node *head)
{
	while (head != NULL)
	{
		cout << (head -> data) << " ";
		head = head -> next;
	}
}


int main() {
	inputOutput();

	Node *head = NULL;
	head = push(head, 4);
	head = push(head, 5);
	head = push(head, 10);
	head = push(head, 12);
	head = push(head, 8);
	head = push(head, 15);
	head = push(head, 17);

	segregate(head);
	printList(head);





	return 0;

}

/*
	You are given a singly linked list. you have to segregate
	even and odd nodes of a linked list. relative orders of
	even and odd nodes should be same.

	I/p: 17 -> 15 -> 8 -> 12 -> 10 -> 5 -> 4
	O/p: 8 -> 12 -> 10 -> 4 -> 17 -> 15 -> 5

	I/p: 8 -> 12 -> 10
	O/p: 8 -> 12 -> 10

	I/p: 1 -> 3 -> 5

*/
