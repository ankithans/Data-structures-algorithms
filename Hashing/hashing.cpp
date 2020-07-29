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

	// unordered_set<int> s;
	// s.insert(10);
	// s.insert(5);
	// s.insert(15);
	// s.insert(20);

	// for (int x : s)
	// 	cout << x << " ";

	// for (auto it = s.begin(); it != s.end(); it ++)
	// 	cout << *it << " ";

	// cout << endl;
	// cout << s.size() << " ";
	// s.clear();
	// cout << s.size() << " ";

	// if (s.find(15) == s.end())
	// 	cout << "Not Found";
	// else
	// 	cout << "Found" << *s.find(15);

	// if (s.count(15))
	// 	cout << "Found";
	// else
	// 	cout << "Not Found";

	// cout << s.size() << " ";
	// s.erase(15);
	// cout << s.size() << " ";
	// auto it = s.find(10);
	// s.erase(it);
	// cout << s.size() << " ";

	// s.erase(s.begin(), s.end());
	// cout << s.size();

	// unordered_set uses hashing internally
	// begin(), end(), cbegin(), cend() - O(1)
	// insert(), erase(val), erase(it), find(), count - O(1) on average
	// size(), empty() - O(1)

	// Applications of unordered_set
	// we can use anywhere when we need following operations
	// Con a subset of following operations quickly
	// Search
	// Insert
	// Delete


	// unordered_map
	// used to store key, value pairs
	// uses hashing
	// No order of keys

	unordered_map<string, int> m;
	m["gfg"] = 20;
	m["ide"] = 30;
	m.insert({"courses", 15});

	// for (auto x : m)
	// 	cout << x.first << " " << x.second << endl;

	// if (m.find("ide") != m.end())
	// 	cout << "Found \n";
	// else
	// 	cout << "Not Found \n";

	// for (auto it = m.begin(); it != m.end(); it++)
	// 	cout << (it->first) << " " << (it->second) << endl;


	// if (m.count("ide") == 1)
	// 	cout << "Found";
	// else
	// 	cout << "Not Found";

	// cout << m.size() << " ";
	// m.erase("ide");
	// m.erase(m.begin(), m.end());
	// cout << m.size() << " ";

	// begin(), end(), size(), empty() - O(1) in worst case
	// count(), find(), [], at, erase(key), insert() - O(1) on avg




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

				0   49
				1	50						50, 51, 49, 16, 56, 15, 19
				2	51						hash(key) = key % 7
				3   16
				4	56						Linear probing: Linearly search for
				5	15						the empty slot when there is a collision
				6	19


				0	42						48, 42, 50, 55, 53
				1	50						hash(key) = key % 7
				2	55
				3
				4	53
				5
				6	48

			--> How to handle deletions in open addressing ?

				0
				1	50						insert(50), insert(51), insert(15),
				2	51						search(15), search(64), delete(15),
				3	15						search(15)
				4
				5							hash(key) = key % 7
				6
								search: we compute hash function
										we go to that index and compare
										if we find, we return true. Otherwise
										we do linearly search.
										we stop in three cases :
											1. Empty slot
											2. key found
											3. traverse through the whole table

					problem with simply making the slot empty when we delete -
						search will stop when we see a empty slot
						so we mark that slot as deleted and donot stop while searching

				Clustering (A problem with linear probing)

				How do we handle clustering problem with linear probing ?
					1. Quadratic Probing (Secondary Clusters)
						hash(key, i) = (h(key) + i^i) % m

					2. Double Hashing
						hash(key, i) = (h1(key) + i*h2(key)) % m


				Double Hashing :- hash(key, i) = (h1(key) + i*h2(key)) % m
						1. if h2(key) is relatively prime to m, then it always
							find a free slot if there is one.
						2. Distributes keys more uniformly than linear probing
							and quadratic hashing.
						3. No Clustering

										hash(key, i) = (h1(key) + i*h2(key)) % m
													 =  (0 + 1 * 3) % 7 = 3
					49, 63, 56, 52, 54, 48			 =  (0 + 1 * 4) % 7 = 4
													 =  (3 + 1 * 2) % 7	= 5
													 =  (5 + 1 * 6) % 7 = 4 --> (5 + 2 * 6) % 7 = 3 --> (5 + 3 * 6) % 7 = 2

						0	49					m = 7
						1					h1(key) = key % 7
						2	54				h2(key) = 6 - (key % 6)
						3	63						= 6 - (63 % 6)
						4	56						= 6 - 3
						5	52						= 3
						6	48
													= 6 - (56 % 6)
													= 6 - 2 = 4

													= 6 - (52 % 6)
													= 6 - 4 = 2

													= 6 - (54 % 6)
													= 6 - 0 = 6



					Why h2(key) and m should be relatively prime ?
						(1 * 6) % 7 = 6
						(2 * 6) % 7 = 5
						(3 * 6) % 7 = 4		this will give all the available slots
						(4 * 6) % 7 = 3		u can try with 4, 7
						(5 * 6) % 7 = 2
						(6 * 6) % 7 = 1


			void doubleHashingInser(key) {
				if(table is full)
					return error;

				probe = h1(key), offset = h2(key); // linear probing offset = 1
				while(table[probe] is occupied)
					probe = (probe + offset) % m;
				table[prob] = key;
			}

			Performance Analysis of Search : (Unsuccessfull)
				α = n/m (should be <= 1)
				Asumption: Every probe sequence looks at a random location

					(1 - α) Fraction of the Table is empty
					Expected No of probes required = 1(/1-α)
							α = 0.8, 5
							α = 0.9, 10


		=> Implementation of Open Addressing:

			MyHash mh(7);
			mh.insert(45);
			mh.insert(56);					45 56 72 -1 -1 -1 -1
			mh.insert(72);					0   1  2  3  4  5  6
			if(mh.search(56) == true)
				print("Yes");				erase(56)
			else							45 -2 72 -1 -1 -1 -1
				print("No");				0  	1  2  3  4  5  6
			mh.erase(56);
			if(mh.search(56) == true)
				print("yes");
			else
				print("No");


			struct MyHash {
				int *arr;
				int cap, size;
				MtHash(int c) {
					cap = c;
					size = 0;
					for(int i = 0; i < cap; i ++)
						arr[i] = -1;
				}
				int hash(int key) {
					return key % cap;
				}

				bool search(int key) {
					int h = hash(key);
					int i = h;
					while(arr[i] != -1) {
						if(arr[i] == key)
							return true;
						i = (i + 1) % cap;
						if (i == h)
							return false;
					}
					return false;
				}

				bool insert(int key) {
					if(size == cap)
						return false;
					int i = hash(key);
					while(arr[i] != -1 && arr[i] != -2 && arr[i] != key)
						i = (i + 1) % cap;
					if(arr[i] == key)
						return false;
					else {
						arr[i] = key;
						size ++;
						return true;
					}
				}

				bool erase(int key) {
					int h = hash(key);
					int i = h;
					while(arr[i] != -1) {
						if(arr[i] == key) {
							arr[i] = -2;
							return true;
						}
						i = (i + 1) % cap;
						if(l == h)
							return false;
					}
					return false;
				}

			}

			=> How to handle the cases when -1 and -2 are input keys ?
				in libraries we dont use actual keys to store at the slots,
				we use pointers or references. empty - null

				create a dummy node
				when you delete you store a pointer to this dummy node.
				its a fixed node.



		Chaining   							Open Addressing
		1. Hash Table never fills			1. Table may become full and resizing
												becomes mandatory.
		2. Less Sensitive to Hash			2. Extra case requires for clustering
		3. Poor cache Performance 			3. Cache friendly
		4. Extra space for links			4. Extra space might be needed to achieve
			1 + α 								same performance as chaining
			1 + 0.9 = 1.9							1/(1 - α)
													1/1-0.9 = 10


*/