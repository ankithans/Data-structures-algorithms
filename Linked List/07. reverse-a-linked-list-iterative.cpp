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
// traversing linked list twice
// extra Aux Space
Node *revList(Node *head)
{
	vector<int> arr;
	for (Node *curr = head; curr != NULL; curr = curr -> next)
		arr.push_back(curr -> data);

	for (Node *curr = head; curr != NULL; curr = curr -> next)
	{
		curr -> data = arr.back();
		arr.pop_back();
	}
	return head;
}

// efficient
// one traversal
// Time O(n)
Node *reverse(Node *head)
{
	Node *curr = head;
	Node *prev = NULL;
	while (curr != NULL)
	{
		Node *next = curr -> next;
		curr -> next = prev;
		prev = curr;
		curr = next;
	}
	return prev; // prev is new head
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

	working of second

	1. 		10 -> 20 -> 30
			c
			p = NULL

	2.     NULL <- 10    20 -> 30
			 	 p    n
			 	      c

	3.     NULL <- 10 <- 20    30
					  p		n
					  		c

	4.     NULL <- 10 <- 20 <- 30	n = NULL
							p 	c = NULL

							return p as head



*/
