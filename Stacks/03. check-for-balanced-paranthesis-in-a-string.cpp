#include <bits/stdc++.h>
using namespace std;


void inputOutput() {
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
}

bool matching(char a, char b)
{
	return ((a == '(' && b == ')') ||
	        (a == '{' && b == '}') ||
	        (a == '[' && b == ']'));
}


// Time O(n)
bool isBalanced(string str)
{
	stack<int> s;
	for (int i = 0; i < str.length(); i ++)
	{
		if (str[i] == '(' || str[i] == '{' || str[i] == '[')
			s.push(str[i]);
		else {
			if (s.empty() == true)
				return false;
			else if (matching(str[i], s.top()) == false)
				return false;
			else
				s.pop();
		}
	}
	return (s.empty() == true);
}
/*
	Traverse throught the array

	if opening brack: push in the stack

	if closing brack: check if top of the stack is
	corresponding opening bracket

	at the end stack size should be 0
*/



int main() {
	inputOutput();

	cout << isBalanced("([])");

	return 0;

}


/*
	Given a string of paranthesis ({, }, (, ), [ and ]), we need
	to check if the string is balanced or not.

	opened latest -> close first.

	I/p: s = "([])"
	O/p: Yes

	I/p: s = "((())"
	O/p: No

	I/p: s = "[{]}"
	O/p: No

	I/p: s = "{}[()]"
	O/p: Yes

*/

