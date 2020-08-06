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

Node *insertBegin(Node *head, int key)
{
	Node *temp = new Node(key);
	temp -> next = head;
	return temp;
}
// void printList(Node *head)
// {
// 	Node *curr = head;
// 	while (curr != NULL)
// 	{
// 		cout << (curr -> key) << " ";
// 		curr = curr -> next;
// 	}
// }

// head value not changed
void printList(Node *head)
{
	while (head != NULL)
	{
		cout << (head -> key) << " ";
		head = head -> next;
	}
}

Node *insertEnd(Node *head, int key)
{
	if (head == NULL)
		return new Node(key);
	Node *curr = head;
	while (curr -> next != NULL)
		curr = curr -> next;
	curr -> next = new Node(key);
	return head;
}

int main() {
	inputOutput();

	Node *head = NULL;
	// head = insertBegin(head, 20);
	// head = insertBegin(head, 5);
	// head = insertBegin(head, 10);
	head = insertEnd(head, 10);
	head = insertEnd(head, 5);
	head = insertEnd(head, 20);
	printList(head);
	printList(head);


	return 0;

}

/*

*/
