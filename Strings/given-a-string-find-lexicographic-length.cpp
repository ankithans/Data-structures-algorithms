#include <bits/stdc++.h>
using namespace std;


void inputOutput() {
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
}

int fact(int n)
{
	return (n == 1 || n == 0) ? 1 : n * fact(n - 1);
}

// O(N)
int lexRank(string str) {
	int rank = 1;
	int n = str.length();
	int mal = fact(n);
	int count[256] = {0};

	// count every character
	for (int i = 0; i < n; i ++)
		count[str[i]] ++;

	// build cumulative count array
	// for every character i how many char are smaller than or equal to this character
	for (int i = 1; i < 256; i ++)
		count[i] = count[i] + count[i - 1];

	for (int i = 0; i < n; i ++) {
		mal = mal / (n - i);
		rank = rank + count[str[i] - 1] * mal;

		for (int j = str[i]; j < 256; j ++)
			count[j] --;
	}
	return rank;
}



int main() {
	inputOutput();

	cout << lexRank("STRING");

	return 0;

}


/*
	Given a string, find lexicographic rank of it.

	I/p: str = "BAC"
	O/p: 3

	I/p: str = "CBA"
	O/p: 6

	I/p: str = "STRING"
	O/p: 598

	string     lex Rank
	ABC			1
	ACB 		2
	BAC			3
	BCA    		4
	CAB  		5
	CBA			6

	we apply mathematics here - count lexicographic smaller string
	S T R I N G
	1. I will count all the strings which donot contain s as the first string
		4 char on right of s which are small than s
		R _ _ _ _ _
		I _ _ _ _ _
		N _ _ _ _ _
		G _ _ _ _ _
		4 * 5!
	2. we fix s and i count strings which are lexiogrpahically smaller and can
		contain s as a 1st char
		I come to T and count how many char are smaller than T
		4 * 5! + 4 * 4!

	3. we fix s & t and count strings which are lexiogrpahically smaller
		I come to R and find how many char are smaller than this
		4 * 5! + 4 * 4! + 3 * 3!

	and so on
		4 * 5! + 4 * 4! + 3 * 3! + 1 * 2! + 1 * 1!
		= 597 + 1 = 598

	BAC ->
		1 * 2! + 0 * 1!
		= 2 + 0 = 2
		= 2 + 1 = 3





	a 97
	b 98
	c 99
	d 100
	e 101
	f 102
	g 103
	h 104
	i 105
	j 106
	k 107
	l 108
	m 109
	n 110
	o 111
	p 112
	q 113
	r 114
	s 115
	t 116



*/