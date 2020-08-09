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

// Time - O(m + n)
// space - O(m + n)
/*
	Method 1.
		1. Create an empty unordered_set hs.
		2. Traverse the first list and put all of its addresses nodes into hs.
		3. Traverse the second list and look for everynode in hs.
			As soon we find a node present in hs, we return val of it.
*/



// Time - O(m + n)
// spcae - O(1)
// Method 2.
/*
	1. Count nodes in both the lists. Let counts be c1 & c2.
	2. Traverse the bigger list abs(c1 - c2) times.
	3. Traverse both the lists simulatneously until we see a
		common node.
*/
while (curr1 != NULL && curr2 != NULL)
{
	if (curr1 == curr2)
		return curr1 -> data;
	curr1 = curr1 -> next;
	curr2 = curr2 -> next;
}
return -1;



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
	I/p: 5 -> 8 -> 7 -> 10 -> 12 -> 15 -> NULL
		 				/
					   9
	O/p: 10
*/
