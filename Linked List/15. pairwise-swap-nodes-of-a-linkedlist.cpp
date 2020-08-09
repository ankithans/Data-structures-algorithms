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

// Method 1. (Swapping Data)
// problem - data might not be simple int data may be objects
void pairwiseSwap(Node *head)
{
	Node *curr = head;
	while (curr != NULL && curr -> next != NULL)
	{
		swap(curr -> data, curr -> next -> data);
		curr = curr -> next -> next;
	}
}


// Method 2. Changing pointers
Node *pairwiseSwap_second(Node *head)
{
	if (head == NULL || head -> next == NULL) return;
	Node *curr = head -> next -> next;
	Node *prev = head;
	head = head -> next;
	head -> prev;
	while (curr != NULL && curr -> next != NULL)
	{
		prev -> next = curr -> next;
		prev = curr;
		Node = *next = cur -> next -> next;
		curr -> next -> next = curr;
		curr = next;
	}
	prev -> next = curr;
	return head;
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
	I/p: 1 -> 2 -> 3 -> 4
	O/p: 2 -> 1 -> 4 -> 3

	I/p: 1 -> 2 -> 3 -> 4 -> 5
	O/p: 2 -> 1 -> 4 -> 3 -> 5
*/
