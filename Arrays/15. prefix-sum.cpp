#include <bits/stdc++.h>
using namespace std;


void inputOutput() {
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
}


int main() {
	inputOutput();

	cout << "abc";

	return 0;

}

/*
	Prefix sum
1.	Given a fixed array and multiple queries of the following types
	on the array, how to efficiently perform the queries

	I/p: arr[] = { 2, 8, 3, 9, 6, 5, 4 }
	    queries : getSum(0, 2)
		    	  getSum(1, 3)
			      getSum(2, 6)
	O/p: 13 20 27

	// Takes O(n) time but we need to answer in O(1)
	int sum = 0;
	for(int i = l; i <= r; i ++)
		sum += arr[i];
	return sum


	// build prefix sum arr
	int prefix_sum[n];
	prefix_sum[0] = arr[0];
	for(int i = 0; i < n; i ++)
		prefix_sum[i] += prefix_sum[i - 1] + arr[i];


	// formula --->  prefix_sum[r] - prefix_sum[i - 1]

	int getSum(int prefixSum[], int l, int r)
	{
		if(l != 0)
			prefix_sum[r] - prefix_sum[l - 1];
		else
			prefix_sum[r];
	}


2.  Given an array of integers, find if it has an equilibirium
	point. (sum of ele before it = sum of ele after it)

	I/p: arr[] = { 3, 4, 8, -9, 20, 6 }
								__
	O/p: yes

	I/p: arr[] = { 4, 2, -2 }
				  __
	O/p: yes

	I/p: arr[] = { 4, 2, 2 }
	O/p: no

	// O(n^2)
	for(int i =0; i < n; i++)
	{
		int l_sum = 0, r_sum = 0;
		for (int j = 0; j < i; j ++)
			l_sum += arr[i];

		for(int k = i + 1; k < n; k ++)
			r_sum += arr[k];

		if(l_sum == r_sum)
			return true;
	}
	return false;

	bool isEqPoint(int arr[], int n)
	{
		int sum = 0;
		for(int i = 0; i < n; i ++)
		{
			if(l_sum == sum - arr[i])
				return true;
			l_sum += arr[i];
			sum -= arr[i]
		}
		return false;
	}

3.  Given n ranges, find the maximum appearing element in their
	ranges :

	I/p: l[] = { 1, 2, 5, 15 }
		 R[] = { 5, 8, 7, 18 }
	O/p: 5

	int maxAppearing(int L[], int R[], int n)
	{
		vector<int> arr[1000];
		for(int i = 0; i < n; i ++)
		{
			arr[L[i]] ++;
			arr[R[i] + 1] --;
		}
		int maxm = arr[0], res = 0;
		for(int i = 1; i < 1000; i ++)
		{
			arr[i] += arr[i - 1];
			if(maxm < arr[i]) {maxm = arr[i]; res = i;}
		}
		return res;
	}

More Questions :
	1. check if a given array can be divided into 3 parts with
		equal sum.
	2. check if there is a subarray with 0 or given sum.
	3. Find the longest subarray with equal 0s and 1s.

*/


