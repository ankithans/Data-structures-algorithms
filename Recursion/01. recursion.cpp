#include <bits/stdc++.h>
using namespace std;


void inputOutput() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

void fact(int n) {
	if (n == 0)
		return 1;
	else
		return n * fact(n - 1);
}

void fact_tail(int n, int val = 1)  {
	if (n == 0)
		return val;

	return fact(n - 1, n * val)
}

int main() {
	inputOutput();



	return 0;

}


/*
	We assume that we have solution of smaller problems. We solve big problem
	by breaking it into smaller problems. We keep breaking until we reach a
	case wherewe can't break.

	I/p: 4								int fact(int n)
	O/p: 24								{
		4 * 3 * 2 * 1 = 24					if(n == 0)
	}											return 1;
											else
												return n * fact(n - 1);
										}

		 24 <- fact(4)
			 6 <- fact(3)
				2 <- fact(2)
				   1 <- fact(1)
					   1 <-fact(0)


		void fun(int n) {
			if (n < 1)
				return;
			else								3 2 1 1 2 3
				cout << n << " ";				visualize using pen & paper
				fun(n - 1);
				cout << n << " ";
		}
		int main() {
			fun(3);
		}

*/