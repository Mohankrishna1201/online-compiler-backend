// C++ program to print given pattern
#include <bits/stdc++.h>
using namespace std;

// Function to print pattern for
// given value of n
void pattern(int n)
{
	// Outer "for" loop for number of rows
	for (int i = 1; i <= n; i++) {
		int k = 'A';
		int m = 1;

		// Inner "for" loop for number of columns
		for (int j = 1; j <= (2 * n); j++) {

			// Logical execution i.e, condition
			if (j >= n + 1 - i && (j <= n + i)) {
				if (j <= n) {

					// Print the alphabets
					cout << char(k);
					k++;
				}
				else {

					// Print the numbers
					cout << m;
					m++;
				}
			}
			else
				cout << " ";
		}

		// Print the next line
		cout << endl;
	}
}

// Driver Code
int main()
{
	int n = 7;

	// Function calling
	pattern(n);

	return 0;
}

