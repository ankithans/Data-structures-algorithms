#include <bits/stdc++.h>
using namespace std;


void inputOutput() {
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
}


/*
	Merge k sorted arrays

	I/p: arr[][] = { { 10, 20, 30 },
					 { 5, 15 },
					 { 1, 9, 11, 18 } }
	O/p: res[] = { 1, 5, 9, 10, 11, 15, 18, 20, 30 }


	I/p: arr[][] = { { 5, 20, 30 },
					 { 1, 2 } }
	O/p: res[] = { 1, 2, 5, 20, 30 }


	==> Super Naive Solution
			1. Put all the elements in res[]
			2. sort res[]

		Time Complexity : O(nklognk)
		where k is the number of input arrays
			  n is the maximum number of elements in an array.

	==> Naive Solution
			1. cpy first aray to res[]
			2. Do following for remaining arrays starting from the second array
				merge the current array into res[]

			res = { 10, 20, 30 }
			res = { 5, 10, 15, 20, 30 }			O(n + 2n + 3n + ..... kn)
			res = { 1, 5, 3, 10, 15, 20, 30 }	O(n(k^2))

	==> Efficient Solution O(nklogk)
			structure of class :  value
								  Position of Array
								  Position of value in Array


*/
struct Triplet {
	int val, aPos, vPos;
	Triplet(int v, int op, vp)
	{ val = v; aPos = ap; vPos = vp; }
};
struct MyComp {
	bool operator(Triplet &t1, Triplet &t2)
	{ return t1.val > t2.val; }
};

vector<int> mergeArr(vector<vector<int>> &arr)
{
	vector<int> res;
	priority_queue<Triplet, vector<Triplet>, MyComp> pq;
	for (int i = 0; i < arr.size(); i++)
	{
		Triplet t(arr[i][0], i, 0);
		pq.push(k);
	}
	while (pq.empty() == false)
	{
		Triplet curr = pq.top(); pq.pop();
		res.push_back(curr.val);
		int ap = curr.aPos, vp = curr.vPos;
		if (vp + 1 < arr[ap].size())
		{
			Triplet t(arr[ap][vp + 1], ap, vp + 1);
			pq.push(t);
		}
	}
	return res;
}

int main() {
	inputOutput();


	return 0;
}



