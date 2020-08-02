#include <bits/stdc++.h>
using namespace std;


void inputOutput() {
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
}

bool compare(int arr1[], int arr2[])
{
	for (int i = 0; i < 256; i++)
		if (arr1[i] != arr2[i])
			return false;
	return true;
}

bool isAnagramPresent(string txt, string pat) {
	int countTextW[256] = {0};
	int countPatw[256] = {0};

	for (int i = 0; i < pat.length(); i ++) {
		countTextW[txt[i]] ++;
		countPatw[pat[i]] ++;
	}

	for (int i = pat.length(); i < txt.length(); i ++) {

		if (compare(countTextW, countPatw))
			return true;

		countTextW[txt[i]] ++;
		countTextW[txt[i - pat.length()]] --;
	}
	return false;
}



int main() {
	inputOutput();

	cout << isAnagramPresent("geeksforgeeks", "eekg");

	return 0;

}


/*
	Given a text string and a pattern string, find if a permutation of the
	pattern exists in the text.

	I/p: txt = "geeksforgeeks"
		 pat = "egek"
	O/p: Yes

	I/p: txt = "geeksforgeeks"
		 pat = "gks"
	O/p: No




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