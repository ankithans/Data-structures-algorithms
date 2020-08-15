#include <bits/stdc++.h>
using namespace std;


void inputOutput() {
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
}


void printFirstN(int n)
{
	queue<int> q;
	q.push("5");
	q.push("6");

	for (int count = 0; count < n; count ++)
	{
		string curr = q.top();
		cout << curr << " ";
		q.pop();
		q.push(curr + "5");
		q.push(curr + "6");
	}
}


int main() {
	inputOutput();

	return 0;
}



/*
	Given a number, print first n numbers (in increasing order) such that
	all the these numbers have digits in set {5, 6}

	Examples
		I/p: n = 10
		O/p: 5, 6, 55, 56, 65, 66, 555, 556

		T/p: n = 4
		O/p: 5, 6, 55, 56

	Note : n can be a big number and the result values might not fit in
			basic data types like long int or long long int.

*/