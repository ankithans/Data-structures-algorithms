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


// Recursive Solution
// Time O(n)
// Aux Space O(n/k)
Node *reverseByk(Node *head, int k)
{
	Node *curr = head;
	Node *prev = NULL;
	Node *next = NULL;

	int count = 0;
	while (curr != NULL && count < k)
	{
		next = curr -> next;
		curr -> next = prev;
		prev = curr;
		curr = next;
		count ++;
	}
	if (next != NULL)
	{
		Node *rest_head = reverseByk(next, k);
		head -> next = rest_head;
	}
	return prev;
}

// iterative solution
Node *reverseByk_iterative(Node *head, int k)
{
	Node *curr = head;
	Node *prevFirst = NULL;
	bool isFirstPass = true;
	while (curr != NULL)
	{
		Node *first = curr;
		Node *prev = NULL;
		int count = 0;
		while (curr != NULL && count < k)
		{
			Node *next = curr -> next;
			curr -> next = prev;
			prev = curr;
			curr = next;
			count ++;
		}
		if (isFirstPass)
		{
			head = prev;
			isFirstPass = false;
		} else {
			prevFirst -> next = prev;
			prevFirst = first;
		}
	}
	return head;
}


int main() {
	inputOutput();


	return 0;

}

/*
	We are given a singly linked list and value k. We need to reverse
	this linked lists in groups of size k.

	I/p: 10 -> 20 -> 30 -> 40 -> 50 -> 60
			k = 3
	O/p: 30 -> 20 -> 10 -> 60 -> 50 -> 40

	I/p: 10 -> 20 -> 30 -> 40 -> 50
			k = 3
	O/p: 30 -> 20 -> 10 -> 50 -> 40

	I/p: 10 -> 20 -> 30
			k = 4
	O/p: 30 -> 20 -> 10


	Working :

		10 -> 20 -> 30 -> 40 -> 50 -> 60 -> 70
		h
			k = 3

		10 -> 20 -> 30 -> 40 -> 50 -> 60 -> 70

*/
