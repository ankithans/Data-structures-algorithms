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

// 1. Method 1 :
// Naive Solution
// traverse the linked list from beginning to end
// for every node at ith node you will find next of it
// store its address in temp variable
// traverse again from the beginning for every node from 0 to i - 1th node
// when u find a node whose address is same as the temp address then Yes
// Time - O(n^2)



// 2. Method 2 :
// Time - O(n)
// we modify the structure of nodes of linked lists. We maintain
// extra field bool visited (initialize as false).
// as we traverse the linked list we mark it as 1 and if we again come
// to a visited element then loop exists.
/*
	10 -> 15 -> 12 -> 20
	0	  0	    0	  0

	10 -> 15 -> 12 -> 20
	1 	  0	 	0	  0

	10 -> 15 -> 12 -> 20
	1	   1    0      1

	10 -> 15 -> 12 -> 20
	1	  1		1	  1
	      |------------|	// here we see that its already vivited
	      						so Yes loop exists
*/


// 3. Method 3 :
// Time - O(n)
// Does not modify the structure of linked list
// modifies pointers or references in the linked list
// hence it changes the linked list
// create a dummy node temp.
// you traverse the linked list. while trversing for every node
// u check if its next is alredy pointing to the dummy node
// in that case you will return true as their is a loop
// else you will move to the next node and u will change the next of
// current node to this dummy node.
/*
	10   15 -> 12 -> 20
	|
		dummynode

	10   15   12 -> 20
	|	 |
		dummynode

	10   15   12 -> 20
	|	 |	  |
		dummynode

	10   15   12   20
	|	 |	  |	   |
		dummy node    // here you will notice that its next is
						already pointing to the dummy node.
*/
bool isLoop(Node *head)
{
	Node *temp = new Node();
	Node *curr = head;
	while (curr != NULL)
	{
		if (curr -> next == NULL)
			return false;
		if (curr -> next == temp)
			return true;
		Node *curr_next = curr -> next;
		curr -> next = temp;
		curr = curr_next;
	}
	return false;
}


// 4. Method 4 : Hashing
// Time - O(n)
// does not modify the structure
// does not modify the linked lists ref or pointers
// you taverse the linked list
// whatever u have visited u  put it in hash table
// insertion and search both are O(1) on avg
// if u see a node again by searching their is a loop
// space : O(n)
bool isLoop_hash(Node *head)
{
	unordered_set<Node *> s;
	for (Node *curr = head; curr != NULL; curr = curr -> next)
	{
		if (s.find(curr) != s.end())
			return true;
		s.insert(curr);
	}
	return false;
}

// 5. Method 5 :
// floyd algorithm
// we begin two pointers from head slow and fast.
// move slow 1 pos at a time
// move fast 2 pos at a time
// we claim that if there is a loop then they definately
// meet each other and vice versa
/*
	10 -> 12 -> 15 -> 20 -> 25  // link between 25 -> 12
	s,f

	10 -> 12 -> 15 -> 20 -> 25
		  s 	f

	10 -> 12 -> 15 -> 20 -> 25
		  		s 	  		f

	10 -> 12 -> 15 -> 20 -> 25
		  		f	  s

	10 -> 12 -> 15 -> 20 -> 25
		  					s,f

	Algorithm:
		1. Initialize slow_p = head, fast_p = head;
		2. Move slow_p by one and fast_p by 2. If
			there is a loop they will meet.

*/
bool isLoop_second(Node *head)
{
	Node *slow_p = head, *fast_p = head;
	while (fast_p != NULL && fast_p -> next != NULL)
	{
		slow_p = slow_p -> next;
		fast_p = fast_p -> next -> next;
		if (slow_p == fast_p)
			return true;
	}
}
/*
	How does floyd algorithm working?

		Points to Note:
			1. fast_p will enter the loop before(or at same
				time as slow_p)
			2. Let fast pointer be k-distance ahead of slow_p
				when slow_p enters the loop where k >= 0.
			3. This distance keeps on increasing by one in
				every movement of both pointers.
			4. Whwn the distance becomes the length of the cycle,
				they meets.

			Time : O(m) + O(n) n -> len of cycle
							   m -> len of nodes prev to cycle
*/


int main() {
	inputOutput();


	return 0;

}

/*
	We are given a singly linked list. The given linked list may
	contain the loop. We need to check whether given linked list
	conatains the loop or not.
	(loop means the next of the last node instead of null, points
	to the one of earlier nodes)

	I/p: 10 -> 15 -> 12 -> 20
			   |------------|
	O/p: Yes

	I/p: head = NULL
	O/p: No

	I/p: 10 -> 20 -> NULL
	O/p: No

	I/p: 10 -> 20 -> 30
		  |-----------|
	O/p: Yes

*/
