#include <bits/stdc++.h>
using namespace std;


void inputOutput() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

void printEncodings(string ques, string asf)
{
	if (ques.length() == 0) {
		cout << asf << endl;
		return;
	} else if (ques.length() == 1) {
		char ch = ques[0];
		if (ch == '0')
			return;
		else {
			int chv = ch - '0';
			char code = (char)('a' + chv - 1);
			cout << asf + code << endl;
		} else {
			char ch = ques[0];
			string ros = ques.substr(1);

			if (ch == '0')
				return;
			else {
				int chv = ch - '0';
				char code = (char)('a' + chv - 1);
				printEncodings(roq, asf + code);
			}

			string ch12 = ques.substr(0, 2);
			string roq = ques.substr()
		}

	}
}


int main() {
	inputOutput();

	string str; cin >> str;
	printEncodings(str, "");

	return 0;
}



