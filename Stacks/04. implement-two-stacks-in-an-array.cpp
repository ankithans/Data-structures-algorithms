#include <bits/stdc++.h>
using namespace std;


void inputOutput() {
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
}

// Naive Sol
// Divide the array in two parts
// you assign half the part to stack1 and other half to stack2
// there is a problem of space


// space efficient
struct TwoStacks
{
	int *arr, cap, top1, top2;
	TwoStacks(int n) {cap = n, top1 = -1, top2 = cap, arr = new arr[n] }

	void push1(int x)
	{
		if (top1 < top2 - 1) { top1 ++; arr[top1] = x; }
	}
	void push2(int x)
	{
		if (top1 < top2 - 1) { top2 --; arr[top2] = x; }
	}

	void pop1()
	{
		if (top1 >= 0) { int x = arr[top1]; top1 --; return x; }
		else { exit(1); }
	}
	void pop2()
	{
		if (top2 < cap) { int x = arr[top2]; top2 ++; return x; }
		else { exit(1); }
	}
};


int main() {
	inputOutput();

	cout << isBalanced("([])");

	return 0;

}


/*
	We are given an array, we need to implement two stacks in it.

	class TwoStacks
	{
		int arr[];

		void push1(int x) {....}
		void push2(int x) {....}
		int pop1() {....}
		int pop2() {....}
		int size1() {....}
		int top1() {....}
		int top2() {....}
	}

*/

