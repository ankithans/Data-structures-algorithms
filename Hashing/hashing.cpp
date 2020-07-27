#include <bits/stdc++.h>
using namespace std;


void inputOutput() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}


int main() {
	inputOutput();



	return 0;

}



/*

	--> Hashing -
			  Search
			  Insert   ---> O(1) on  average
			  Delete

		=> Hashing is expert data structure for search, insert and delete.

		=> Not Useful for -
				Finding closest value - avl trees / Red black tree
				sorted data - avl trees / Red black tree
				prefix searching - Trie

		=> Application of Hashing
				1. Dictionaries
				2. Database Indexing
				3. Cryptography
				4. Caches
				5. Symbol Tables in compilers/Interpreters
				6. Routers
				7. Getting data form databases
				8. Many More

		=> Direct Address Table
			Imagine a situation where you have 1000 keys with values from
			(0 to 999), how would you implement following in O(1) time.
				1. Search
				2. Insert
				3. Delete

					Example Operations -
						insert(10) - table[10] = 1
						insert(20) - table[20] = 1
						insert(119) - table[119] = 1
						search(10) - true
						search(20) - true
						delete(119)	- table[119] = 0
						search(119) - false

				we create a boolean array of size 1000, we initialize this array
				with all values as 0.

				0 0 0 .. 1  ....  1  .... 0 .... 1 .... 0   0
				0 1 2    10       20            119    998 999
									table[]


				delete(i) {
					table[i] = 0
				}

				search(i) {
					return table[i];
				}

				insert(i) {
					table[i] = 1;
				}

				But there are limitations of Direct Access Tables -
					1. can't store floating values
					2. can't store strings
					3. keys cant have large values like phone no = 10^10 array size
					4. adresses


		=> Hashing Introduction -

			Take a large universe of keys convert them into small keys
			and store them into hash tables

			 		example : Phone Numbers
			 				  Name
			 				  Employee ID [E1021]


											  0
											  1
			Universe                          2
			   of  ----> Hash Function ---->  .
			  Keys                            .
											  .
											 n-1

											 Hash Tables


			-> How Hash Functions work ?
				 1. should always map a large key to same small key
				 2. sholud generate values from 0 to m-1 (m - size of hash table)
				 3. should be fast, O(1) for integers and O(len) for string of
				 	length 'len'
				 4. should uniformly distribute large keys into Hash Table slots


			-> Example Hashing Functions -
				1. h(large_key) = large_key % m
				2. For strings, weighted sum
					str[] = "abcd"
					(str[0] * x^0 + str[1] * x^1 + str[2] * x^3 + str[3] * x^4) % m
				3. Universal Hashing


		=> Collision Handling -
			If we know keys in advance, then we can Perfect Hashing.
			If we donot know keys, then we can use one of the following
				1. chaining
				2. Open addressing
						a. Linear Probling
						b. Quadratic Probing
						c. Double Hashing

		=> Chaining -
			we maintain an array of linked lists

				hash(key) = key % 7
				keys = { 50, 21, 58, 17, 15, 49, 56, 22, 23, 25 }

					0	21 -> 49 -> 56
					1	50 -> 15 -> 22
					2	58 -> 23
					3	17
					4	25
					5
					6
				Hash Table (Array of linked list headers)

				Performance -
					m = No. of slots in Hash Table
					n = No. of keys to be inserted
					Load Factor α = n/m
					Expected chain length = α
					Expected time to search = O(1 + α)
					Expenceted time to Insert/Delete = O(1 + α)

				Data Structures for storing chains
					1. Linked List - Search O(l), Delete O(l), insert O(l)
							disadvantages -
									not cache friendly as nodes are at diff pos
									it uses extra space to store next references or pointers
					2. Dynamic Sized Arrays - O(l) - search, insert, delete
							 (vector in C++, arrayList in java, list in python)
							 cache friendly
					3. Self balancing BST (AVL Tree, Red Black Tree)
							O(logl) - search, insert and delete
							not cache friendly


		=> Implementation of chaining -
				BUCKET = 7

				NULL             70 -> 56
				NULL			 71
				NULL   Insert    9  -> 72
				NULL   ------>   NULL
				NULL   70,71,9	 NULL
				NULL   56,72	 NULL		Search(56) => True
				NULL			 NULL		Search(57) => False


				struct MyHash
				{
					int BUCKET;
					list<int> *table;
					MyHash(int b) {
						BUCKET = b;
						table = new list<int> [b];
					}
					void insert(int key) {
						int i = key % BUCKET;
						table[i].push_back(key);
					}
					bool search(int key) {
						int i = key % BUCKET;
						for(auto x: table[x])
							if(x == key)
								return true;
						return false;
					}
					void remove(int key) {
						int i = key % BUCKET;
						table[i].remove(key);
					}
				}


		=> Open Addressing
				--> No of slots on Hash Table >= No. of keys to be inserted
				--> Cache friendly

				0
				1							50, 51, 49, 16, 56, 15, 19
				2
				3
				4
				5
				6




*/