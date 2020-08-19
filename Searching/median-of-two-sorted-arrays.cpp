#include <bits/stdc++.h>
using namespace std;


void inputOutput() {
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
}



/*
	min1 : min element in the right side of a1
	max1 : max element in the left side of a1
	min2 : min element in the right side of a2
	max2 : max element in the left side of a2
*/
double getMed(int a1[], int a2[], int n1, int n2)
{
	int begin1 = 0, end1 = n1;
	while (begin1 <= end1)
	{
		int i1 = (begin1 + end1) / 2;
		int i2 = ((n1 + n2 + 1) / 2 ) - i1;

		int min1 = (i1 == n1) ? INT_MAX : a1[i1];
		int max1 = (i1 == 0) ? INT_MIN : a1[i1 - 1];

		int min2 = (i2 == n2) ? INT_MAX : a2[i2];
		int max2 = (i2 == 0) ? INT_MIN : a2[i2 - 1];

		if (max1 <= min2 && max2 <= min1)
		{
			if ((n1 + n2) % 2 == 0)
				return ((double) max(max1, max2) + min(min1, min2)) / 2;
			else
				return (double) max(max1, max2);
		}
		else if (max1 > min2)  end1 = i1 - 1;
		else begin = i1 + 1;
	}
}



int main() {
	inputOutput();

	int arr[] = { 2, 2, 3, 3, 3 };

	return 0;

}



/*
	Median of two sorted arrays

	I/p: a1[] = { 10, 20, 30, 40, 50 }
		 a2[] = { 5, 15, 25, 35, 45 }
	O/p: 27.5  // { 5, 10, 15, 20, 25, 30, 35, 40, 45, 50 }
								   --  --

	I/p: a1[] = { 1, 2, 3, 4, 5, 6 }
		 a2[] = { 10, 20, 30, 40, 50 }
	O/p: 6.0   // { 1, 2, 3, 4, 5, 6, 10, 20, 30, 40, 50 }

	I/p: a1[] = { 10, 20, 30, 40, 50, 60 }
		 a2[] = { 1, 2, 3, 4, 5 }
	O/p: 10.0  // { 1, 2, 3, 4, 5, 10, 20, 30, 40, 50, 60 }


	// Naive solution : O((n1 + n2) * log(n1 + n2))
		1. create an array temp[] of size (n1 + n2)
		2. copy elements of a1[] and a2[] to temp[]
		3. sort temp[]
		4. if (n1 + n2) is odd, then return middle of temp.
		5. else return average of middle two elements.


	// Efficient : O(logn1) where n1 <= n2
		n1 = 5  a1[] = { 10, 20, 30, 40, 50 }
		n2 = 9  a2[] = { 5, 15, 25, 35, 45, 55, 65, 75, 85 }
		n1 + n2 = 14


		i2 = ((n1 + n2 + 1) / 2)  - i1

		i1 - begg of right set in 1st arr
		i2 - begg of right set in 2nd arr





*/