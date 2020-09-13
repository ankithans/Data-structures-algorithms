#include <bits/stdc++.h>
using namespace std;


void inputOutput() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

void Wildcard(string s, int i)
{
	if (i == s.length())
	{
		cout << s << endl;
		return;
	}
	if (s[i] == '?')
	{
		s[i] = '0';
		Wildcard(s, i + 1);

		s[i] = '1';
		Wildcard(s, i + 1);
	} else
		Wildcard(s, i + 1);
}

int main() {
	inputOutput();

	string str; cin >> str;
	Wildcard(str, 0);

	return 0;
}



