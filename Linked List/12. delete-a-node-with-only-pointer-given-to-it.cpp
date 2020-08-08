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

// Tricky
// element to be del should not be last element
void deleteNode(Node *ptr)
{
	Node *temp = ptr -> next;
	ptr -> data = temp -> data;
	ptr -> next = temp -> next;
	delete(temp);
}


int main() {
	inputOutput();


	return 0;

}

/*
	You are given address or reference of a random node in a linked list.
	You need to delete this node.(you are not given the head pointer.)

	10 -> 20 -> 30 -> 40 -> 25 -> NULL

	I/p: Pointer or References to node with value 30.
	O/p: The list should change to

	10 -> 20 -> 40 -> 25 -> NULL

*/
