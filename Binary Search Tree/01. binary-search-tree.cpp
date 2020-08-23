#include <bits/stdc++.h>
using namespace std;


void inputOutput() {
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
}


int main() {
	inputOutput();



	return 0;

}

/*
	|----------------------------------------------------------------------------------|
	|				   Array		Array	  Linked List	BST(Balanced)	Hash Table |
	|				   (unsort) 	(sort.)											   |
	|----------------------------------------------------------------------------------|
	|Search			    O(n)		O(logn)		O(n)			O(logn)		O(1)	   |
	|Insert			    O(1)		O(n)		O(1)			O(logn)		O(1)	   |
	|Delete			    O(n)		O(n)		O(n)			O(logn)		O(1)       |
	|Find Closest	    O(n)		O(logn)		O(n)			O(logn)		O(n)       |
	|Sorted Traversal   O(nlogn)	O(n)		O(nlogn)		O(n)		O(nlogn)   |
	|											O(n) in case	                       |
	|											of sorted                              |
	|											linked list                            |
	|----------------------------------------------------------------------------------|

	Binary Search Three
	1. For every node, keys in left side are smaller and keys in right
		side are greater.
	2. All keys are typically considered as distinct.
	3. Like Linked List, its is a linked data structure.

							 50
						   /    \
						  30    70
						 /  \  /  \
						10  40 60 80

	4. Implemented in c++ as map, set, multimap and multiset.

	Example Operations :
		1. Create an empty BST
		2. Insert 20, 15, 30, 40, 50,
				  12, 18, 35, 80 and 7

				  			20
				  		  /    \
				  		 15     30
				  		/  \      \
					   12  18	  40
					  /			 /  \
					 7			35 	50
 									  \
 									   80

 			Insert 5, 10, 20, 30, 40

 				5
 				 \
 				  10
 				   \
 				    20
 				     \
					  30
					   \
					    40
 */

