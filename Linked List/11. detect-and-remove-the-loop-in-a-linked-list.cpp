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


/*
	working :
	 1. Detect the loop using floyd detection algorithm.
	 2. Move "slow_p" to beginning of linked list and keep
	 	"fast_p" at the starting point.
	 3. Now one by one move slow and fast (at same speed).
	 	The point where they meet now is the first node of loop.
*/
void detectRemoveLoop(Node *head)
{
	Node *slow = head, *fast = head;
	while (fast != NULL && fast -> next != NULL)
	{
		slow = slow -> next;
		fast = fast -> next -> next;
		if (slow == fast)
			break;
	}
	if (slow != fast)
		return;
	slow = head;
	while (slow -> next != fast -> next)
	{
		slow = slow -> next;
		fast = fast -> next;
	}
	fast -> next = NULL;
}

/*
	Variations :
		1. Find the length of loop. -- loop detection
		2. Find the first node of the loop. -- loop deletion

*/


int main() {
	inputOutput();


	return 0;

}

/*
	Detect the loop and delete the loop.

	I/p: 10 -> 15 -> 5 -> 20
			   |-----------|
	O/p: 10 -> 15 -> 5 -> 20 -> NULL

	I/p: 10 // pointing to itself
	O/p: 10 -> NULL

	I/p: 10 -> 15 -> 20 -> NULL
	O/p: 10 -> 15 -> 20 -> NULL

*/
