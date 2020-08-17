#include <bits/stdc++.h>
using namespace std;


void inputOutput() {
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
}


// recursive solution
int maxProfit(int price[], int start, int end)
{
	if (end <= start)
		return 0;
	int profit = 0;
	for (int i = start; i < end; i ++)
	{
		for (int j = i + 1; j <= end; j ++)
		{
			if (price[j] > price[i])
			{
				int curr_profit = profit[j] - profit[i] +
				                  maxProfit(price, start, i - 1) +
				                  maxProfit(price, j + 1, end);
				profit = max(profit, curr_profit);
			}
		}
	}
	return profit;
}


// Naive solution
// u know the prices before.
// so u let the graph of price go down
// when the prics reach bottom at that time u will buy the stock
// when they are going up let them go up
// once they reach the peak u will sell them
int maxProfit(int price)
{
	int profit = 0;
	for (int i = 1; i < n; i ++)
		if (price[i] > price[i - 1])
			profit += (price[i] - price[i - 1]);
}


int main() {
	inputOutput();

	cout << "abc";

	return 0;

}

/*
	Stock By and sell

	I/p: arr[] = { 1, 5, 3, 8, 12 }
	O/p: 13

	I/p: arr[] = { 30, 20, 10 }
	O/p: 0

	I/p: arr[] = { 10, 20, 30 }
	O/p: 20

	I/p: arr[] = { 1, 5, 3, 1, 2, 8 }
	O/p: 11



*/


