#include <iostream>
using namespace std;

struct node {
	int data;
	node *next;
	node(int x)
	{
		data = x;
		next = NULL;
	}
};

node *head = NULL;

void create(int data) {
	if (head == NULL)
		head = new node(data);
	else {
		node *curr = head;
		while (curr -> next != NULL)
			curr = curr -> next;
		curr -> next = new node(data);
	}
}

void printList()
{
	node *curr = head;
	while (curr != NULL)
	{
		cout << "->" << curr -> data;
		curr = curr -> next;
	}
}

void deleteNode(int index)
{
	if (head == NULL)
		return;
	node *curr = head;
	if (index == 1) {
		head = curr -> next;
		return;
	}
	int len = 0;
	for (node *a = head; a != NULL; a = a -> next)
		len ++;
	if (len < index)
		cout << "Invalid position!" << endl;
	else
	{
		for (int i = 1; i < index - 1; i ++)
			curr = curr -> next;
		node *temp = curr -> next -> next;
		curr -> next = temp;
	}
}

int main() {

	int n; cin >> n;
	while (n --)
	{
		int d; cin >> d;
		create(d);
	}
	int index; cin >> index;
	deleteNode(index);
	cout << "Linked List : ";
	printList();


	return 0;
}