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
	Node *left, *right;
	Node(int x)
	{
		key = x;
		left = right = NULL;
	}
};



int main() {
	inputOutput();


	return 0;
}

/*

	Self Balancing BST
	Idea : Keep the height as O(logn)
	Background : Some set of keys can make different height BST

	order1: 7, 10, 11, 15, 30, 35, 40
		7
		 \
		  10
		   \
		    11
		     \
		      15
		       \
		        30
		         \
		          35

    order2: 15, 10, 7, 11, 35, 30, 40

    			15
    		   /   \
    		  10   35
    		 / \   / \
    		7  11 30 40

    If we know keys in advance, we can make a perfectly balanced BST.
    How to keep it balanced when random insertions/deletions happening?

    The idea is to do some restructuring (or re-balancing) when doing
    insertions/deletions.

    Insert 100, 200 and 300 in an empty BST

    100			100			100				200
    			  \			  \	  			/ \
    			   200 		  200		  100  300
    			   				\
    			   				 300

   	Insert 300, 200 and 100

   	300			300			300					200
   				/ 			 /				    / \
   			   200		   200    ----->	  100 300
							/
						  100

*/

